/*
**	Programming project #3
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

void generate_random_walk(int walk[SIZE][SIZE][CELLS]);
void print_array(int walk[SIZE][SIZE][CELLS]);

int main(void)
{
	int		arr[SIZE][SIZE][CELLS];

	generate_random_walk(arr);
	print_array(arr);
	return (0);
}

void generate_random_walk(int walk[10][10][CELLS])
{
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
					walk[i][j][k] = '.';
				else
					walk[i][j][k] = false;
				k++;
			}
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	letter = 'A';
	walk[i][j][0] = letter;
	while (letter < 'Z')
	{
		next = rand() % (4 - 1 + 1) + 1;
		if (walk[i + 1][j][0] != '.' && walk[i - 1][j][0] != '.' && i >= 1 && i <= 8)
		{
			if (walk[i][j + 1][0] != '.' && walk[i][j - 1][0] != '.' && j >= 1 && j <= 8)
				break;
		}
		if (next == UP)
		{
			if (walk[i - 1][j][0] != '.' || i == 0)
				continue;
			else
				i -= 1;
		}
		else if (next == DOWN)
		{
			if (walk[i + 1][j][0] != '.' || i == 9)
				continue;
			else
				i += 1;
		}
		else if (next == RIGHT)
		{
			if (walk[i][j + 1][0] != '.' || j == 9)
				continue;
			else
				j += 1;
		}
		else if (next == LEFT)
		{
			if (walk[i][j - 1][0] != '.' || j == 0)
				continue;
			else
				j -= 1;
		}
		letter++;
		walk[i][j][0] = letter;
		// printf("Letter: %c, next: %d\n", letter, next);
	}
}

void print_array(int walk[10][10][CELLS])
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			printf("%c ", walk[i][j][0]);
			j++;
		}
		printf("\n");
		i++;
	}
}
