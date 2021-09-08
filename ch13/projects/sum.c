/*
** Project 05: sum.c
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
		sum += atoi(argv[i++]);
	printf("Total: %d\n", sum);
	return (0);
}
