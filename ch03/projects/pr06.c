/*
**	Project #6
*/

#include <stdio.h>

int main(void)
{
	int numer1;
	int denom1;
	int numer2;
	int denom2;
	int result_num;
	int result_denom;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &numer1, &denom1, &numer2, &denom2);
	result_num = numer1 * denom2 + numer2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	return (0);
}
