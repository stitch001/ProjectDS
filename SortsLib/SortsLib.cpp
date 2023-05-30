// SortsLib.cpp : 定义静态库的函数。
//

#include "pch.h"
#include "framework.h"
#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size)
{
	bool moved = false;
	for (int i = 0; i < size; i++) {
		moved = false;
		for (int j = 0 ; j < size - i - 1; j++){
			if (arr[j] < arr[j - 1]) {
				auto t = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = t;
				moved = true;
			}
		}

		if (!moved) {
			return;
		}
	}
}

// TODO: 这是一个库函数示例
void fnSortsLib()
{
	int arr1[] = {1,5,7,8,0,3,7,6,2,9};
	bubble_sort(arr1, sizeof(arr1) / sizeof(int));
	for (auto& i : arr1)
	{
		cout << i << " ";
	}
	cout << endl;
}
