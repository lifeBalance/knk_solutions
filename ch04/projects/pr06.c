/*
** Project #6
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
	int i6;
	int j1;
	int j2;
	int j3;
	int j4;
	int j5;
	int check_digit;
	int first_sum;
	int second_sum;
	int total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d %1d%1d%1d%1d%1d%1d %1d%1d%1d%1d%1d",
	&d, &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);
	first_sum = i1 + i3 + i5 + j1 + j3 + j5;
	second_sum =  d + i2 + i4 + i6+ j2 + j4;
	total = (3 * first_sum) + second_sum;
	check_digit = 9 - ((total - 1) % 10);
	printf("Check digit = %d\n", check_digit);
	return (0);
	// 8 691484 260008
}
