#define _CRT_SECURE_NO_WARNINGS 1
//����n�Ľ׳�
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

//����1��+2��+3��---+10��
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

//��һ�������������в��Ҿ����ĳ������
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}//Ч��̫����


//�۰���ң����ֲ��ң���ǰ������������
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
//		int mid = (left+right)/2;//�������ĺϳ�����int�Ĵ�С����������Ͳ���ƽ��ֵ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("û�ҵ�");
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("û�ҵ�");
//	return 0;
//}

//���м���ʾ����

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
//		system("cls");//������Ļ
//		left++;
//		right--;
//
//	}
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룬���������ȷ
//����ʾ��¼�ɹ���������δ������˳�����
//���������� ��123456��
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0 )
//		{
//			flag = 1;
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (flag == 0)
//	printf("��������������˳�����\n");
//
//	return 0;
//}

//��������Ϸʵ��
//1. ��������һ��1~100�����
//2.������
//�´��ˣ��͸����� : �´���
//��С�ˣ��͸�����:��С��
//�¶��ˣ��͸�����:��ϲ�㣬�¶���
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
////rand�����᷵��һ��0-32767֮��������
//void game()
//{
//	//1.���������
//	int ret = rand()%100+1;
//	//printf("%d\n",ret);
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	//�����������������
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}