#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，你的电脑将在1分钟内关机，如果输入哈哈哈就可以取消\n");
	again:
	scanf("%s",arr);
	if (strcmp(arr, "哈哈哈") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入\n");
		goto again;
	}
	return 0;
}

