#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a, i, num,j,d;
	scanf_s("%d", &a);						//输入
	for(num=a,i=0;num>0;i++)
	{
		num = num / 10;
	}
	printf("%d\n", i);			//结束,数字分拆开始
	for (d=0,num=a,j = 0; j < i; j++)
	{
		d = d + (num % 10)*pow(10, i - j - 1);
		num = num / 10;
	}
	for (num=d,j = 0; j < i; j++)
	{
		printf("%d ", num % 10);
		num = num / 10;
	}										//结束
	printf("\n%d\n",d);				//输出倒置
	system("pause");						//结束
	return 0;
}