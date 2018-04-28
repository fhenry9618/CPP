#include <iostream>

using namespace std;

//Adds element to the back of the queue, if not full
void enqueue(char queue[], char elt, int& rear, int arraySize){
	if(rear == arraySize){//Full queue detected
	     	cout << "Queue Overflow state" << endl;
	}
	else{//Add element to back of the queue
		queue[rear] = elt;
		rear++;
	}		
}

//Removes element from front of the queue, if not empty
void dequeue(char queue[], int& front, int rear){
	if(front == rear){//Empty queue detected
		cout << "Queue Underflow state" << endl;
	}
	else{//Remove element from the front of the queue
		queue[front] = 0;
		front++;
	}
}

//Returns value of front element in queue
char Front(char queue[], int front){
	return queue[front];
}

int main(){
	char queue[20] = {'a', 'b', 'c', 'd'};
	int front = 0;
	int rear = 4;
	int arraySize = 20;
	int N = 3;
	char ch;
	
	for(int i = 0; i < N; i++){
		ch = Front(queue, front);
		enqueue(queue, ch, rear, arraySize);
		dequeue(queue, front, rear);
	}
	
	for(int i = front; i < rear; i++){
		cout << queue[i];
	}
	
	cout << endl;
	
	return 0;
}