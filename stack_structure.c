#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 400

struct Stack {
    int maxSize;
    char stackArray[MAX_SIZE];
    int top;
};

void initStack(struct Stack* stack, int size) {
    stack->maxSize = size;
    stack->top = -1;
}

void push(struct Stack* stack, char item) {
    if (stack->top < stack->maxSize - 1) {
        stack->stackArray[++stack->top] = item;
    }
}

char pop(struct Stack* stack) {
    if (stack->top >= 0) {
        return stack->stackArray[stack->top--];
    }
    return ' ';
}

char peek(struct Stack* stack) {
    if (stack->top >= 0) {
        return stack->stackArray[stack->top];
    }
    return ' ';
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int main(){
    struct Stack operatorStack;
    initStack(&operatorStack, MAX_SIZE);
    push(&operatorStack, 'a');
    push(&operatorStack, 'b');
    printf("%c\n",peek(&operatorStack));
    printf("%c\n",pop(&operatorStack));
    printf("%c\n",pop(&operatorStack));
    printf("%c\n",peek(&operatorStack));

	return 0;
}
