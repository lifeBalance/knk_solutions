/*
**	Exercise #13
*/

#include <stdio.h>
#include <ctype.h>

#define N 4

int evaluate_position(char board[8][8]);
int	get_value(char ch);

int main(void)
{
	char board[8][8] = {
						{'R', 'K', 'B', 'Q', '.', 'B', 'K', 'R'},
						{'.', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
						{'.', '.', '.', '.', '.', '.', '.', '.'},
						{'p', '.', '.', '.', '.', '.', '.', '.'},
						{'.', 'p', '.', '.', '.', '.', '.', '.'},
						{'b', '.', 'k', '.', '.', '.', '.', '.'},
						{'p', '.', 'p', 'p', 'p', 'p', 'p', 'p'},
						{'r', '.', '.', '.', 'q', 'b', 'k', 'r'}
	};
	printf("Score: %d\n", evaluate_position(board));
	return (0);
}

int evaluate_position(char board[8][8])
{
	int i;
	int j;
	int whites;
	int blacks;

	whites = 0;
	blacks = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (board[i][j] >= 'B' && board[i][j] <= 'R')
				whites += get_value(board[i][j]);
			else if (board[i][j] >= 'b' && board[i][j] <= 'r')
				blacks += get_value(board[i][j]);
			j++;
		}
		i++;
	}
	return (whites - blacks);
}

int	get_value(char ch)
{
	ch = toupper(ch);

	if (ch == 'Q')
		return (9);
	else if (ch == 'R')
		return (5);
	else if (ch == 'B' || ch == 'N')
		return (3);
	else if (ch == 'P')
		return (1);
	return (0);
}