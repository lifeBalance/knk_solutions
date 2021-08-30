/*
**	Exercise #16
*/

#include <stdio.h>

#define ROWS 7
#define COLS 12

float	find_largest(float a[], int n);

int		main(void)
{
	float	temperatures[7][12] = {
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{22.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{69.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 69.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5}};
	int		i;

	i = 0;
	while (i < ROWS)
	{
		printf("Largest temperature of day #%d: %.2f\n", i + 1, find_largest(temperatures[i], COLS));
		i++;
	}
	return (0);
}

float	find_largest(float a[], int n)
{
	float max;
	float *p;

	max = *a;
	for (p = a; p < a + n; p++)
		max = *p > max ? *p : max;
	return (max);
}
