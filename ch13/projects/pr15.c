/*
** Project 15
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define EXP_LEN		80
#define STACK_SIZE	100

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
int		evaluate_RPN_expression(const char *expression);
/*
**	Let's do a small demonstration!
*/
int main(void)
{
	char	exp[EXP_LEN + 1];
	char	ch;
	int		i;

	while (1)
	{
		i = 0;
		printf("Enter an RPN expression: ");
		while ((ch = getchar()) != '=' && ch != 'q')
		{
			if (!isspace(ch))
			{
				exp[i] = ch;
				i++;
			}
		}
		if (ch == 'q')
			break;
		else if (ch == '=')
			exp[i] = ch;
		printf("Value of expression: %d\n", evaluate_RPN_expression(exp));
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

int evaluate_RPN_expression(const char *expression)
{
	int		op1;
	int		op2;
	char	ch;

	while (*expression)
	{
		ch = *expression++;
		if (ch >= '0' && ch <= '9')
			push(ch - '0');
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
			break;
		}
		else
			exit(EXIT_FAILURE);
	}
	return (operands[top]);
}
