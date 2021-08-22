/*
**	Programming project #1
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* Global Variables */
char	contents[STACK_SIZE];
int		top = 0;

/* Prototypes */
void	make_empty(void);
bool	is_empty(void);
bool	is_full(void);
void	push(char ch);
char	pop(void);
void	stack_overflow(void);
void	stack_underflow(void);

int main(void)
{
	char ch;

	printf("Enter parentheses and/or curly braces: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == ')')
		{
			if (pop() != '(')
				printf("Parentheses don't match.\n");
			else
				continue;
		}
		if (ch == '}')
		{
			if (pop() != '{')
				printf("Curly braces don't match.\n");
			else
				continue;
		}
		push(ch);
	}
	if (is_empty())
		printf("Parentheses/braces are nested properly.\n");
	else
		printf("Parentheses/braces don't match.\n");
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

void	push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char	pop(void)
{
	if (is_empty())
		stack_underflow();
	return (contents[--top]);
}

void	stack_overflow(void)
{
	printf("Stack Overflow. Quitting.\n");
	exit(EXIT_FAILURE);
}

void	stack_underflow(void)
{
	printf("Stack Underflow. Quitting.\n");
	exit(EXIT_FAILURE);
}
