#include<stdio.h>
#include<stdlib.h>
int main()
{
	float r, h;
	scanf_s("%f%f", &r, &h);
	float PI = 3.14;
	float c1, sa, sb, va, vb;
	c1 = 2 * PI*r;
	sa = PI*r*r;
	sb = 4 * sa;
	va = sb*r / 3;
	vb = sa*h;
	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n", c1, sa, sb, va, vb);
	system("pause");
	return 0;
}