#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ�������������������������ݡ�
#include<stdio.h>

//int Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("����ǰ a = %d b = %d",a,b);
//	Swap(&a, &b);
//	printf("������ a = %d b = %d", a, b);
//	return 0;
//}

//�����ж�����

//#include<math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//�ж��Ƿ�Ϊ����

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == is_leap_year(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//���ֲ���
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d",ret);
//	}
//	return 0;
//}


//�����˷��ھ������������Լ�����

//int form(int j,int i)
//{
//	return j * i;
//}
//
//int main()
//{
//	int row = 0;
//	int column = 0;
//	scanf("%d %d",&row ,&column);
//	for (int i = 1; i <= column; ++i)
//	{
//		for (int j = 1; j <= column; ++j)
//		{
//			int ret = form(j,i);
//			printf("%d ",ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//






