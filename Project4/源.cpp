#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	c = getchar();
		c < 91 && c>64 ? printf("%c\n", c + 32) : printf("%c\n", c);
	system("pause");
	return 0;
}