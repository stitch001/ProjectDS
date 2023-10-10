# include "myQueue.h"
# include <iostream>

using namespace std;

bool isEmpty(queue* q) {
	return q->head == q->rear;
}

void queueTest() {
	queue q;
	cout << "Queue Test" << endl;
}