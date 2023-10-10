#pragma once
#define MYQUEUE_SIZE 10

struct queue {
	int arr[MYQUEUE_SIZE];
	int head = 0;
	int rear = 0;
};

void queueTest();
bool isEmpty(queue *);