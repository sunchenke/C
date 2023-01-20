#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//递归和非递归分别实现strlen
//
//int sum_strlen(char* pa)
//{
//	if (*pa != '\0')
//	{
//		return 1 + sum_strlen(pa + 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//int main()
//{
//	char arr[10] = { "123456" };
//	int len = strlen(arr);
//	printf("%d\n",len);
//	int ret = sum_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题)

//int digit(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * digit(n - 1);
//	}
//}
//
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	 ret = digit(n);
//	printf("%d",ret);
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//int Sum(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int Fib(int n)
//
//{
//	if (n >= 3)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Sum(n);
//	printf("%d\n",ret);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//递归实现n的k次方
//int Fic(int n, int k)
//{
//	if (n == 1)
//		return 1;
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Fic(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	int ret = Fic(n, k);
//	printf("%d",ret);
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = DigitSum(n);
//	printf("%d",ret);
//	return 0;
//}

//字符串逆序（递归实现）

//reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[10] = {"abcdef"};
//	reverse_string(arr);
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		printf("%c",arr[i]);
//	}
//
//	return 0;
//}

//递归方式实现打印一个整数的每一位

//void print (int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\n",n%10);
//}
//
//int main()
//{
//	int number = 0;
//	scanf("%d",&number);
//	print(number);
//	return 0;
//}


int main()
{
    char str[] = "hello bit";
    printf("%d %d\n", sizeof(str), strlen(str));
    return 0;
}








