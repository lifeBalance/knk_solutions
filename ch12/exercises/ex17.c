/*
**	Exercise #17
*/

#include <stdio.h>

#define	LEN		4
#define	ROWS	3

int sum_two_dimensional_array(const int a[][LEN], int n);

int		main(void)
{
	int		a[][LEN] = {{2, 3, 7, 8},
						{2, 2, 2, 2},
						{3, 2, 2, 1}};

	printf("Sum: %d\n", sum_two_dimensional_array(a, ROWS));
	return (0);
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
	const int	*ptr;
	int			sum = 0;

	for (ptr = *a; ptr < *a + n * LEN; ptr++)
		sum += *ptr;
	return (sum);
}
