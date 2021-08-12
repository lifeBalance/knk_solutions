/*
**	Exercise #02
*/

#include <stdio.h>

#define SIZE (sizeof(a) / sizeof(a[0]))

int main(void)
{
	int	a[10];

	/*
	**	We need to scale the character variable we're using as an index:
	**	since the ASCII code number for 0 is 48, when we do ch - '0' is
	**	like doing ch - 48, which results in an integer from 0 to 9.
	*/
	for (char ch = '0'; ch - '0' < SIZE; ch++)
		a[ch - '0'] = 69;
	for (char ch = '0'; ch - '0' < SIZE; ch++)
		printf("a[%d] = %d\n", ch - '0', a[ch - '0']);
	return (0);
}
