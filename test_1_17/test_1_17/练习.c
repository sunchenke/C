#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�������

//int main()
//{
//	int a, max, i;
//	max = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		scanf("%d",&a);
//		if (max < a)
//		{
//			max = a;
//		}
//	}
//	printf("%d",max);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	float num = 1.0;
//	int i = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			num -= 1.0 / i;
//		}
//		else
//		{
//			num += 1.0 / i;
//		}
//	}
//	printf("%.1f",num);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i%10 == 9 || i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}