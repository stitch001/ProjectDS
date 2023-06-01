#include "linkedlisthead.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

void LinkedListTest()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);
    auto head = createLinkedList(arr, size);
    traverse(head);
    return;
}

void traverse(LinkedList head) {
    auto p = head->next;
    while (p != NULL) {
        cout << p->val << "----";
        p = p->next;
    }
    cout << endl;
}

LinkedList createLinkedList(int arr[],int size)
{
    LinkedList head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    head->val = -1;
    for (int i = size - 1; i >= 0; i--) {
        ListNode* lt = (ListNode*)malloc(sizeof(ListNode));
        lt->val = arr[i];
        lt->next = head->next;
        head->next = lt;
    }
    return head;
}

