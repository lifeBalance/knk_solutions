/*
** Computes a Universal Product Code check digit.
*/

#include <stdio.h>

int main(void)
{
	int d;
	int i1;
	int i2;
	int i3;
	int i4;
	int i5;
	int j1;
	int j2;
	int j3;
	int j4;
	int j5;
	int first_sum;
	int second_sum;
	int total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digit: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digit: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	first_sum =  d 	+ i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = (3 * first_sum) + second_sum;
	printf("Check digit = %d\n", 9 - ((total - 1) % 10));
	return (0);
}
