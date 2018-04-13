#include <iostream>

using namespace std;

//Global variable declaration, also default value for empty stack
int top = -1;

//Insert element x at the top of the stack
void push (int stack[], int x, int n){
	if(top == n-1){
		cout << "Stack is full. Overflow state reached." << endl;
	}
	else{
		top = top + 1;
		stack[top] = x;
	}
}

bool isEmpty(){
	if(top == -1)
		return true;
	else
		return false;
}

//Remove an element from the top of the stack
void pop(){
	if(isEmpty()){
		cout << "Stack is empty. Underflow state reached." << endl;
	}
	else{
		top = top - 1;
	}
}

//Return the top element in the stack
int topElement(int stack[]){
	return stack[top];
}

//Return the size of the stack
int size(){
	return top + 1;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//Main function for implementation
int main(){
	int stack[3];//declaration of practice stack
	push(stack, 5, 3);//pushing element 5 into stack
	
	cout << "Current size of this stack is: " << size() << endl;
	
	push(stack, 10, 3);
	push(stack, 24, 3);
	
	cout << "Current size of this stack is: " << size() << endl;
	
	push(stack, 12, 3);//should trigger an overflow condition
	
	cout << "The current top element of the stack: " << topElement(stack) << endl;
	
	//loop to clear out elements in the stack
	for(int i = 0; i < 3; i++){
		pop();
		cout << "Current size of this stack is: " << size() << endl;
	}
	
	pop(); //should trigger an overflow condition
	
	return 0;
}
