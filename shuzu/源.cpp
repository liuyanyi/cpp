#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i, j, t;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for(j=0;j<9;j++)
		for(i=0;j<9-i;i++)
		if (a[i] > a[i + 1])
		{
			t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
		}
	for(i=0;i<=9;i++)
	printf("%d ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}