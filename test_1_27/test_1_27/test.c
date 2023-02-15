#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
double x[5] = {2.0, 4.0, 6.0, 8.0, 10.0};
char c2[] = { '\x10', '\xa', '\8' };
char c1[] = { '1','2','3','4','5' };
int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };
int main()
{
	int ret = sizof(x)/sizeof(x[0]);
	printf("%d",ret);
	return 0;
}