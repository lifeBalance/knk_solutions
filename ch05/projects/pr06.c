/*
**	Programming project #6
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
	int check_digit;
	int last_digit;

	printf("Enter UPC: ");
	scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d %1d",
	&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &last_digit);
	first_sum =   d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = (3 * first_sum) + second_sum;
	check_digit = 9 - ((total - 1) % 10);
	if (check_digit== last_digit)
		printf("VALID\n");
	else
		printf("NOT VALID\n");
	return (0);
}
