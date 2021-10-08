/*
**	Programming project #5
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	char	ch;
	int		op1;
	int		op2;

	while (1)
	{
		printf("Enter an RPN expression: ");
		while (scanf(" %c", &ch))
		{
			if (ch >= '0' && ch <= '9')
			{
				push(ch - '0');
			}
			else if (ch == '*' || ch == '+' || ch == '-' || ch == '/')
			{
				op2 = pop();
				op1 = pop();
				switch (ch)
				{
					case '*':
						push(op1 * op2);
						break;
					case '+':
						push(op1 + op2);
						break;
					case '-':
						push(op1 - op2);
						break;
					case '/':
						push(op1 / op2);
						break;
				}
			}
			else if (ch == '=')
			{
				make_empty();
				printf("Value of expression: %d\n", operands[top]);
				break;
			}
			else
				exit(EXIT_FAILURE);
		}
	}
	return (0);
}
