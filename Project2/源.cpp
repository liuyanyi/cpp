#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, x, y;
	scanf_s("%d,%d", &a, &b);
	y = 0.5*b - a;
	x = a - y;
	printf("鸡有%d只，兔有%d只",x,y);
	system("pause");
	return 0;
}