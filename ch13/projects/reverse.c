/*
** Project 04: reverse.c
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i > 0)
		printf("%s ", argv[i--]);
	putchar('\n');
	return (0);
}
