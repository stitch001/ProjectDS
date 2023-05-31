#pragma once

struct ListNode {
	int val;
	ListNode* next;
};

typedef ListNode* LinkedList;

void LinkedListTest();

LinkedList createLinkedList(int arr[], int size);
void traverse(LinkedList);