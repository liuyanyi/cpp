#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3];
	int i, max;
	for (i = 0; i < 3; i++)
		scanf_s("%d", &a[i]);
	max = a[0];
	if (a[0] < a[1])
		max = a[1];
	if (max < a[2])
		max = a[2];
	printf("%d", max);
	system("pause");
	return 0;
}