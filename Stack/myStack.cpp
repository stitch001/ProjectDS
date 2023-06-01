#include "myStack.h"
#include <iostream>

void stackTest()
{
	stack s;
	push(&s, 1);
	push(&s, 2);
	pop(&s);
	push(&s, 3);
	std::cout << "Õ»¶¥ÔªËØ£º" << top(s) << std::endl;
}

bool isEmpty(stack s)
{
	if (s.top == s.base) {
		return true;
	}
	return false;
}

bool isFull(stack s)
{
	if (sizeof(s.arr) / sizeof(int) == s.top) {
		return true;
	}
	return false;
}

bool push(stack* s, int val)
{
	if (isFull(*s) ){
		std::cout << "ÈëÕ»Ê§°Ü£¬Õ»ÒÑÂú" << std::endl;
		return false;
	}

	s->arr[s->top] = val;
	s->top++;
}

int pop(stack* s){
	if (isEmpty(*s)) {
		std::cout << "³öÕ»Ê§°Ü£¬Õ»¿Õ" << std::endl;
		return -1;
	}
	int out = s->arr[s->top];
	s->top--;
	return out;
}

int top(stack s) {
	if (isEmpty(s)) {
		std::cout << "Õ»¿Õ£¬Õ»¶¥ÔªËØ²»´æÔÚ" << std::endl;
	}
	return s.arr[s.top-1];
}