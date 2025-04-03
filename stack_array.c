#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int ele) {
	if(top<=MAX_SIZE-1) {
		a[++top]=ele;
		printf("Pushed: %d\n",ele);
	}
	else {
		printf("Stack is full. Cannot push: %d\n",ele);
	}
}

int pop() {
	if(top>=0) {
		int ele = a[top];
		top--;
		printf("Popped: %d\n",ele);
		return ele;
	}
	else {
		printf("Stack is empty. Cannot pop.\n");
		return -1;
	}
}

int peek() {
	if(top>=0) {
		int ele = a[top];
		printf("Peeked: %d\n",ele);
		return ele;
	}
	else {
		printf("Stack is empty. Cannot peek.\n");
		return -1;
	}
}

int isEmpty() {
	return top==-1;
}

int isFull() {
	return top>=MAX_SIZE;
}

int main() {
	push(1);
	push(2);
	push(3);

	peek();

	pop();
	pop();
	pop();
	pop();

	peek();
	return 0;
}
