#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, x, y;
	scanf_s("%d,%d", &a, &b);
	y = 0.5*b - a;
	x = a - y;
	printf("����%dֻ������%dֻ",x,y);
	system("pause");
	return 0;
}