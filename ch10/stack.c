#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* Global Variables */
int		contents[STACK_SIZE];
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
	push(1);
	push(2);
	printf("Popping: %d\n", pop());
	printf("Popping: %d\n", pop());
	printf("Popping: %d\n", pop());
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
		contents[top++] = i;
}

int		pop(void)
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
