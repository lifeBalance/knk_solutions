/*
**	Programming project #9
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE	10
#define CELLS	5
#define UP		1
#define RIGHT	2
#define DOWN	3
#define LEFT	4

int main(void)
{
	int		arr[SIZE][SIZE][CELLS];
	int		letter;
	int		i;
	int		j;
	int		k;
	int		next;
	time_t	t;

	srand(time(&t));
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			k = 0;
			while (k < CELLS)
			{
				if (k == 0)
					arr[i][j][k] = '.';
				else
					arr[i][j][k] = false;
				k++;
			}
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	letter = 'A';
	arr[i][j][0] = letter;
	while (letter < 'Z')
	{
		next = rand() % (4 - 1 + 1) + 1;
		if (arr[i + 1][j][0] != '.' && arr[i - 1][j][0] != '.' && i >= 1 && i <= 8)
		{
			if (arr[i][j + 1][0] != '.' && arr[i][j - 1][0] != '.' && j >= 1 && j <= 8)
				break;
		}
		if (next == UP)
		{
			if (arr[i - 1][j][0] != '.' || i == 0)
				continue;
			else
				i -= 1;
		}
		else if (next == DOWN)
		{
			if (arr[i + 1][j][0] != '.' || i == 9)
				continue;
			else
				i += 1;
		}
		else if (next == RIGHT)
		{
			if (arr[i][j + 1][0] != '.' || j == 9)
				continue;
			else
				j += 1;
		}
		else if (next == LEFT)
		{
			if (arr[i][j - 1][0] != '.' || j == 0)
				continue;
			else
				j -= 1;
		}
		letter++;
		arr[i][j][0] = letter;
		// printf("Letter: %c, next: %d\n", letter, next);
	}
	/*
	**	Print the whole thing
	*/
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			printf("%c ", arr[i][j][0]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
