#define _CRT_SECURE_NO_WARNINGS 1
//计算n的阶乘
#include<stdio.h>
//int i = 0;
//int ret = 1;
//int n = 0;
//int main()
//{
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d ",ret);
//	return 0;
//}

//计算1！+2！+3！---+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (n = 1; n <= i; n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//在一个【有序】数组中查找具体的某个数字
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int sz = sizeof(arr)/sizeof(arr[0]);
//int i = 0;
//int k = 7;
//int flag = 0;
//int main()
//{
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到");
//	}
//	return 0;
//}//效率太低了


//折半查找（二分查找），前提是数组有序
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz-1;
//	int left = 0;
//	int k = 17;
//
//	int flag = 0;
//	while (left<=right)
//	{
//		int mid = (left+right)/2;//加起来的合超过了int的大小，那求出来就不是平均值了
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("没找到");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int k = 17;
//
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = left +(right -left)/ 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("没找到");
//	return 0;
//}

//向中间显示文字

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to world";
//	char arr2[] = "****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");//清理屏幕
//		left++;
//		right--;
//
//	}
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次（只允许输入三次密码，如果密码正确
//则提示登录成功，如果三次错误，则退出程序）
//假设密码是 “123456”
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0 )
//		{
//			flag = 1;
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (flag == 0)
//	printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//猜数字游戏实现
//1. 电脑生成一个1~100随机数
//2.猜数字
//猜大了，就告诉你 : 猜大了
//猜小了，就告诉你:猜小了
//猜对了，就告诉你:恭喜你，猜对了
// 
// 
//void menu()
//{
//	printf("*************************\n");
//	printf("******** 1. play  *******\n");
//	printf("******** 0. exit  *******\n");
//	printf("*************************\n");
//}
//
//#include<stdlib.h>
//#include<time.h>
////rand函数会返回一个0-32767之间的随机数
//void game()
//{
//	//1.生成随机数
//	int ret = rand()%100+1;
//	//printf("%d\n",ret);
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	//设置了随机的生成器
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}