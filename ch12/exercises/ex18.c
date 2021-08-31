/*
**	Exercise #18
*/

#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]);
int	get_value(char ch);

int		main(void)
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
	char	*ptr;
	int		whites;
	int		blacks;

	whites = 0;
	blacks = 0;
	ptr = *board;
	while (ptr < *board + 8 * 8)
	{
		if (*ptr >= 'B' && *ptr <= 'R')
			whites += get_value(*ptr);
		else if (*ptr >= 'b' && *ptr <= 'r')
			blacks += get_value(*ptr);
		ptr++;
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
