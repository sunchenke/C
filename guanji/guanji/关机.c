#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ����������������Ϳ���ȡ��\n");
	again:
	scanf("%s",arr);
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������\n");
		goto again;
	}
	return 0;
}

