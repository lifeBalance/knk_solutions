/*
**	Programming project #8
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
	int		grades[SIZE][SIZE];
	float	total;
	int		high;
	int		low;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < SIZE)
	{
		printf("Enter student %d: ", i + 1);
		scanf("%d %d %d %d %d",	&grades[i][j],
								&grades[i][j + 1],
								&grades[i][j + 2],
								&grades[i][j + 3],
								&grades[i][j + 4]);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		total = 0;
		j = 0;
		while (j < SIZE)
		{
			total += grades[i][j];
			j++;
		}
		printf("Student #%d: Total = %.2f, Average = %.2f\n", i + 1, total, total / 5);
		i++;
	}
	j = 0;
	while (j < SIZE)
	{
		i = 0;
		total = 0;
		high = 0;
		low = 1000;
		while (i < SIZE)
		{
			total += grades[i][j];
			if (grades[i][j] < low)
				low = grades[i][j];
			if (grades[i][j] > high)
				high = grades[i][j];
			i++;
		}
		printf("Quiz #%d: Average = %.2f, High = %d, Low = %d\n", j + 1, total / 5, high, low);
		j++;
	}
	return (0);
}
