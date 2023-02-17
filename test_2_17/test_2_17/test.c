#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (line - 1) * 2 - 1 - (i * 2); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//打印水仙花数
//int main()
//{
//	int number = 0;
//	for (number = 100; number <= 999; number++)
//	{
//		int a = number % 10;
//		int b = number / 10 % 10;
//		int c = number / 10 / 10 % 10;
//		if (a * a * a + b * b * b + c * c * c == number)
//		{
//			printf("%d\n",number);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int num = 0;
//	int a, b, c, d, e;
//	scanf("%d", &num);
//	a = num;
//	b = num * 10 + a;
//	c = num * 100 + b;
//	d = num * 1000 + c;
//	e = num * 10000 + d;
//	int sum = a + b + c + d + e;
//	printf("%d+%d+%d+%d+%d=%d",a,b,c,d,e,sum);
//	return 0;
//}
