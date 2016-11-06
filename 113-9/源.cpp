#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,g=0;
	printf("输入成绩:");
	scanf_s("%d", &a);
	if (a > 100 || a < 0)
	{
		printf("数据有误\n");
		system("pause");
		return 0;
	}
	g = a % 10;
	switch (g)
	{
	case 9:printf("A"); break;
	case 10:printf("A"); break;
	case 8:printf("B"); break;
	case 7:printf("C"); break;
	case 6:printf("D"); break;
	default:printf("E"); break;
	}
	printf("\n");
	system("pause");
	return 0;
}