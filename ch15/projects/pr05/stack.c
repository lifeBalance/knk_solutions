#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int operands[STACK_SIZE];
int top = 0;

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
