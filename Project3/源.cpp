#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	scanf_s("%d", &year);
	if ((year % 400) == 0)
		printf("%d��������",year);
	else if(((year%4)==0)&((year%100)!=0))
		printf("%d��������",year);
	else printf("%d�겻������",year);
	system("pause");
	return 0;

}
