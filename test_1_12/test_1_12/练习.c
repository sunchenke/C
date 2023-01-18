#define _CRT_SECURE_NO_WARNINGS 1

//9*9乘法口诀表
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int a = 0;
//	for (i = 1; i <= 9;i++)
//	{
//		for (a = 1; a <= 9; a++)
//		{
//			sum = a*i;
//			printf("%d ",sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10个整数最大值
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int a = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ",&arr[i]);
		
	} 
	int max = arr[0];
	for (i = 1; i <= 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d ",max);

	return 0;
}