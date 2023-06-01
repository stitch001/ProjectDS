#include "myStack.h"
#include <iostream>

void stackTest()
{
	stack s;
	push(&s, 1);
	push(&s, 2);
	pop(&s);
	push(&s, 3);
	std::cout << "ջ��Ԫ�أ�" << top(s) << std::endl;
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
		std::cout << "��ջʧ�ܣ�ջ����" << std::endl;
		return false;
	}

	s->arr[s->top] = val;
	s->top++;
}

int pop(stack* s){
	if (isEmpty(*s)) {
		std::cout << "��ջʧ�ܣ�ջ��" << std::endl;
		return -1;
	}
	int out = s->arr[s->top];
	s->top--;
	return out;
}

int top(stack s) {
	if (isEmpty(s)) {
		std::cout << "ջ�գ�ջ��Ԫ�ز�����" << std::endl;
	}
	return s.arr[s.top-1];
}