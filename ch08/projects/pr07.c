/*
**	Programming project #7
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
	int		arr[SIZE][SIZE];
	int		row;
	int		col;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < SIZE)
	{
		printf("Enter row %d: ", i + 1);
		scanf("%d %d %d %d %d",
		&arr[i][j], &arr[i][j + 1], &arr[i][j + 2], &arr[i][j + 3], &arr[i][j + 4]);
		i++;
	}
	printf("Row totals: ");
	i = 0;
	while (i < SIZE)
	{
		row = 0;
		j = 0;
		while (j < SIZE)
		{
			row += arr[i][j];
			j++;
		}
		printf("%d ", row);
		i++;
	}
	printf("\nColumn totals: ");
	j = 0;
	while (j < SIZE)
	{
		i = 0;
		col = 0;
		while (i < SIZE)
		{
			col += arr[i][j];
			i++;
		}
		printf("%d ", col);
		j++;
	}
	printf("\n");
	return (0);
}
