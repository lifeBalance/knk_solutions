/*
**	Exercise #02
*/

#include <stdio.h>

int check(int x,int y, int n);

int main(void)
{
	printf("%d\n", check(4,  3, 5));	// 1
	printf("%d\n", check(4, -3, 5));	// 0
	return (0);
}

int check(int x,int y, int n)
{
	if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1)
		return (1);
	return (0);
}
