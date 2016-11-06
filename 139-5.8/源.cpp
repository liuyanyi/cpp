#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, i;
	for (a = 1, b = 1, i = 1; i <= 20; i++)
	{
		printf("%12d %12d",a,b);
		if (i % 2 == 0)printf("\n");
		a = a + b;
		b = a + b;
		
	}
	printf("\n");
	system("pause");
	return 0;
}