/*
**	Exercise #17
*/

#include <stdio.h>

int	fact(int n);

int main(void)
{
	printf("Factorial of %d: %d\n", 4, fact(4));
	printf("Factorial of %d: %d\n", 5, fact(5));
	printf("Factorial of %d: %d\n", 6, fact(6));
	return (0);
}

int	fact(int n)
{
	int ret_val;

	ret_val = 1;
	while (n)
	{
		ret_val *= n;
		n--;
	}
	return (ret_val);
}
