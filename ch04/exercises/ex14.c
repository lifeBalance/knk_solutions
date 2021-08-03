/*
** Exercise #14
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int result;

	a = 0;
	b = 1;
	c = 3;
	d = 3;
	e = 4;
	result = (a * b) - (c * d) + e;
	printf("(a) %d\n", result);		// -5
	result = ((a / b) % c) / d;
	printf("(b) %d\n", result);		// 0
	result = (((-a) - b) + c) + d;
	printf("(c) %d\n", result);		// 5
	result = ((a * (-b)) / c) - d;
	printf("(d) %d\n", result);		// -3
	return (0);
}
