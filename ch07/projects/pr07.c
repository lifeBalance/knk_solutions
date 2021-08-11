/*
**	Project #7
*/

#include <stdio.h>

int main(void)
{
	int		numer1;
	int		denom1;
	int		numer2;
	int		denom2;
	int		result_num;
	int		result_denom;
	char	op;

	printf("Enter two fractions (a/b +-*/ c/d: ");
	scanf("%d/%d %c %d/%d", &numer1, &denom1, &op, &numer2, &denom2);
	switch (op) {
		case '+':
			result_num = numer1 * denom2 + numer2 * denom1;
			result_denom = denom1 * denom2;
			printf("The sum is %d/%d\n", result_num, result_denom);
			break ;
		case '-':
			result_num = numer1 * denom2 - numer2 * denom1;
			result_denom = denom1 * denom2;
			printf("The difference is %d/%d\n", result_num, result_denom);
			break ;
		case '*':
			result_num = numer1 * numer2;
			result_denom = denom1 * denom2;
			printf("The product is %d/%d\n", result_num, result_denom);
			break ;
		case '/':
			result_num = numer1 * denom2;
			result_denom = denom1 * numer2;
			printf("The quotient is %d/%d\n", result_num, result_denom);
			break ;
	}
	return (0);
}
