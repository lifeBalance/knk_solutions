/*
**	Exercise #2 (Page 49)
*/

#include <stdio.h>

int main(void)
{
	float pi;

	pi = 3.14;
	printf("|%-8.1e|\n", pi);
	printf("|%10.6e|\n", pi);
	printf("|%-8.3f|\n", pi);
	printf("|%6.0f|\n", pi);
	return (0);
}
