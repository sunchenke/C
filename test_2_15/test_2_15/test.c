#define _CRT_SECURE_NO_WARNINGS 1

//调整数组使奇数全部都位于偶数前面。
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include <stdio.h>
//void my_sort(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
// 	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	my_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//模拟实现库函数strcpy
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* scr)
//{
//	assert(dest && scr);
//	char* ret = dest;
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//
//}


//模拟实现库函数strlen
//
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d",my_strlen(arr));
//	return 0;
//}