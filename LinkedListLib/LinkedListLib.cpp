// LinkedListLib.cpp : 定义静态库的函数。
//

#include "pch.h"
#include <iostream>
#include "framework.h"

using namespace std;

// TODO: 这是一个库函数示例
void fnLinkedListLib()
	
{
	ListNode l2 = { 1, nullptr };
	ListNode l1 = { 3 , &l2 };

	traverse(&l1);
}

void traverse(LinkedList root) {
	auto p = root;
	while (p != nullptr) {
		cout << p->val << endl;
		p = p->next;
	}
}