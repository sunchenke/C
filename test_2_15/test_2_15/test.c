#define _CRT_SECURE_NO_WARNINGS 1

//��������ʹ����ȫ����λ��ż��ǰ�档
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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


//ģ��ʵ�ֿ⺯��strcpy
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


//ģ��ʵ�ֿ⺯��strlen
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