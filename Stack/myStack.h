#pragma once

#define MYSTACK_SIZE 10

struct stack {
	int arr[MYSTACK_SIZE];
	int top = 0;
	int base = 0;
};

void stackTest();

bool isEmpty(stack);
bool isFull(stack);
int pop(stack*);
bool push(stack*,int);
int top(stack);

