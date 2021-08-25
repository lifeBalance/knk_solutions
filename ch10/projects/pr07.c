/*
**	Programming project #7
*/

#include	<stdio.h>

#define		MAX_DIGITS 10

void		clear_digits_array(void);
void		process_digit(int digit, int position);
void		print_digits_array(void);

const int	segments[10][7] = { {1, 1, 1, 1, 1, 1},
								{0, 1, 1},
								{1, 1, 0, 1, 1, 0, 1},
								{1, 1, 1, 1, 0, 0, 1},
								{0, 1, 1, 0, 0, 1, 1},
								{1, 0, 1, 1, 0, 1, 1},
								{1, 0, 1, 1, 1, 1, 1},
								{1, 1, 1},
								{1, 1, 1, 1, 1, 1, 1},
								{1, 1, 1, 1, 0, 1, 1}};

char		digits[3][MAX_DIGITS * 4];

int			main(void)
{
	char	ch;
	int		i;

	clear_digits_array();
	printf("Enter a number: ");
	i = 0;
	while ((ch = getchar()) != '\n' && i < MAX_DIGITS)
	{
		if (ch >= '0' && ch <= '9')
		{
			process_digit(ch - '0', i);
			i++;
		}
	}
	print_digits_array();
	return (0);
}

void		clear_digits_array(void)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < MAX_DIGITS * 4; col++)
			digits[row][col] = ' ';
}

void		process_digit(int digit, int position)
{
	int offset = position * 4;

	if (segments[digit][0])
		digits[0][1 + offset] = '_';
	if (segments[digit][5])
		digits[1][0 + offset] = '|';
	if (segments[digit][1])
		digits[1][2 + offset] = '|';
	if (segments[digit][6])
		digits[1][1 + offset] = '_';
	if (segments[digit][4])
		digits[2][0 + offset] = '|';
	if (segments[digit][2])
		digits[2][2 + offset] = '|';
	if (segments[digit][3])
		digits[2][1 + offset] = '_';
}

void		print_digits_array(void)
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < MAX_DIGITS * 4; col++)
			printf("%c", digits[row][col]);
		printf("\n");
	}
}
