/*
**	Programming project #12
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char	op;
	float	temp;
	double	value;

	printf("Enter an expression: ");
	scanf("%lf", &value);
	while ((op = getchar()) != '\n') {
		scanf("%f", &temp);
		switch (op) {
			case '+':
				value += temp;
				break ;
			case '-':
				value -= temp;
				break ;
			case '*':
				value *= temp;
				break ;
			case '/':
				value /= temp;
				break ;
		}
	}
	printf("Value of expression: %.1f\n", value);
	return (0);
}
