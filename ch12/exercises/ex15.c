/*
**	Exercise #15
*/

#include <stdio.h>

#define COLS 12

void print_row(const float a[], int n, int i);

int main(void)
{
	float	temperatures[7][12] = {
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{22.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{69.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5},
	{23.0, 32.0, 27.1, 28.3, 29.4, 69.5, 28.9, 21.0, 22.0, 23.5, 24.8, 25.5}};
	int		row;

	while (1)
	{
		printf("Enter a row: ");
		scanf("%d", &row);
		if (row == 0 || row > 7)
		{
			printf("%d: Invalid row! Quitting.\n", row);
			break;
		}
		print_row(temperatures[0], COLS, row - 1);
	}
	return (0);
}

void print_row(const float a[], int n, int i)
{
	const float	*ptr;

	for (ptr = a + (i * n); ptr < a + (i * n) + n; ptr++)
		printf("%6.1f", *ptr);
	printf("\n");
}
