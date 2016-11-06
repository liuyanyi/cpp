#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	scanf_s("%d", &year);
	if ((year % 400) == 0)
		printf("%d年是闰年",year);
	else if(((year%4)==0)&((year%100)!=0))
		printf("%d年是闰年",year);
	else printf("%d年不是闰年",year);
	system("pause");
	return 0;

}
