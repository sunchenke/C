#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int arr1[5] = { 1,2,3,4,5 };
//int arr2[5] = { 5,4,3,2,1 };
//int i = 0;
//int main()
//{
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr1[%d] = %d,\n", i, arr1[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr2[%d] = %d,\n", i, arr2[i]);
//	}
//
//
//}

//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//
//	}
//}
//
//int main()
//{
//	int sz;
//	int arr[] = { 1,2,3,4,5 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//}