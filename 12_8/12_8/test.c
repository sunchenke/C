#define _CRT_SECURE_NO_WARNINGS 1
//坐电梯
//#include<stdio.h>
//int TIME(int x)
//{
//    if (x < 12)
//    {
//        return 2;
//    }
//    else
//        return (x / 12) * 4 + 2;
//}
//
//int main()
//{
//    int people = 0;
//    scanf("%d",&people);
//    int a = TIME(people);
//    printf("%d\n",a);
//    return 0;
//}



//找最大数
//#include<stdio.h>
//int MAX[5] = { 0 };
//int sum = 0;
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d",&MAX[i]);
//		if (sum < MAX[i])
//		{
//			sum = MAX[i];
//		}
//	}
//	printf("%d",sum);
//	return 0;
//
//}



//转换成绩
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d",&score);
//	if (score >= 0 && score <= 59)
//	{
//		printf("E");
//	}
//	else if (score >= 60 && score <= 69)
//	{
//		printf("D");
//	}
//	else if (score >=70&& score <= 79)
//	{
//		printf("C");
//	}
//	else if (score >= 80 && score <= 89)
//	{
//		printf("B");
//	}
//	else if (score >= 90 && score <= 100)
//	{
//		printf("A");
//	}
//	else
//		printf("F");
//	return 0;
//}

//ASCII表
//#include <stdio.h>
//
//int main()
//{
//    int a[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int i = 0;
//    while (i < 12)
//    {
//        printf("%c", a[i]);
//        i++;
//    }
//    return 0;
//}

//统计数据正负个数
//#include <stdio.h>
//int a[10] = { 0 };
//int i = 0;
//int b, c;
//int main()
//{
//
//    while (i < 10)
//    {
//        scanf("%d", &a[i]);
//        if (a[i] < 0)
//        {
//            b++;
//        }
//        else
//        {
//            c++;
//        }
//        i++;
//    }
//    printf("positive:%d\n", c);
//    printf("negative:%d\n", b);
//
//    return 0;
//
//}

//最高分和最低分之差
//#include <stdio.h>
//
//int main()
//{
//    int max = 0;
//    int min = 0;
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    max = arr[0];
//    min = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//    }
//    printf("%d", max - min);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        if (m > max)
//        {
//            max = m;
//        }
//        if (m < min)
//        {
//            min = m;
//        }
//
//    }
//
//    printf("%d", max - min);
//    return 0;
//}

