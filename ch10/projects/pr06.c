/*
**	Programming project #6
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* Global Variables */
int		operands[STACK_SIZE];
int		top = 0;

/* Prototypes */
void	make_empty(void);
bool	is_empty(void);
bool	is_full(void);
void	push(int i);
int		pop(void);
void	stack_overflow(void);
void	stack_underflow(void);

/*
**	Let's do a small demonstration!
*/
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

void	make_empty(void)
{
	top = 0;
}

bool	is_empty(void)
{
	return (top == 0);
}

bool	is_full(void)
{
	return (top == STACK_SIZE);
}

void	push(int i)
{
	if (is_full())
		stack_overflow();
	else
		operands[top++] = i;
}

int		pop(void)
{
	if (is_empty())
		stack_underflow();
	return (operands[--top]);
}

void	stack_overflow(void)
{
	printf("Expression is too complex. Quitting.\n");
	exit(EXIT_FAILURE);
}

void	stack_underflow(void)
{
	printf("Not enough operands in expression. Quitting.\n");
	exit(EXIT_FAILURE);
}
