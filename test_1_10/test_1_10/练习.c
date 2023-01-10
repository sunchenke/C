#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int a = 0;
//int b = 0;
//int c = 0;
//int change = 0;
//int main()
//{
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		change = a;
//		a = b;
//		b = change;
//	}
//	if (a < c)
//	{
//		change = a;
//		a = c;
//		c = change;
//	}
//	if (b < c)
//	{
//		change = b;
//		b = c;
//		c = change;
//	}
//
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//打印素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	int count = 0;
//	for (i = 101; i < 200; i++)
//	{
//		flag = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		if (flag == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

//打印闰年

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=1000; i<=2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ",i);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//最大公约数
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scnaf("%d %d",&m,&n);
//	int k = (m < n ? m : n);
//	while (1)
//	{
//		if ( m % k == 0 && n % k == 0)
//			break;
//		k--;
//
//	}
//	printf("%d ", k);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d",&m,&n);
//	int k = 0;
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//
//	}
//	printf("%d",n);
//	return 0;
//}