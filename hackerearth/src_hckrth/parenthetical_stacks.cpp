/*
Balanced Parentheses - 

This program utilizes a stack to determine whether or not
a statement enclosed with parentheses is "balanced" in regards
to opening and closing parentheses.

When an opening parentheses is encountered, it is pushed to the stack.

When a closing parenthese is encountered, a parentheses must be popped
from the stack.

*/

#include <iostream>

using namespace std;

int top; //global variable declaration

//determines whether or not a parenthetical string is balanced
void check(char str[], int n, char stack[]){
	
	for(int i = 0; i < n; i++){
		if(str[i] == '('){
			top = top + 1;
			stack[top] = '(';
		}
		
		if(str[i] == ')' ){
			if(top == -1){
				top = top - 1;
				break;
			}
			else{
				top = top - 1;
			}
		}
	}
	
	if(top == -1)
		cout << "Balanced string" << endl;
	else
		cout << "Unbalanced string" << endl;
}

//main function
int main(){
	
	//balanced string
	char str[] = {'(', 'a', '+', '(', 'b', '-', 'c', ')', ')'};
	
	//unbalanced string
	char str1[] = {'(', '(', 'a', '+', 'b', ')'};
	char stack [15];
	top = -1;
	
	//passing the balanced string
	check(str, 9, stack);
	
	//passing the unbalanced string
	check(str1, 5, stack);
	
	return 0;
}