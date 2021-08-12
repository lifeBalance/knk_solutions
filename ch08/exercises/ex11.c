/*
**	Exercise #11
*/

#include <stdio.h>

int main(void)
{
	char	checker_board[8][8];
	int		i;
	int		j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				checker_board[i][j] = 'B';
			else
				checker_board[i][j] = 'R';
		}
	}
	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", checker_board[i][j]);
			if (j < 7)
				putchar(' ');
		}
		printf("\n");
	}
	return (0);
}
