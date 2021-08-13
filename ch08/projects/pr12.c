/*
**	Programming project #12
*/


#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letters[26] = {
		['A' - 'A'] = 1,
		['E' - 'A'] = 1,
		['I' - 'A'] = 1,
		['L' - 'A'] = 1,
		['N' - 'A'] = 1,
		['O' - 'A'] = 1,
		['R' - 'A'] = 1,
		['S' - 'A'] = 1,
		['T' - 'A'] = 1,
		['U' - 'A'] = 1,
		['D' - 'A'] = 2,
		['G' - 'A'] = 2,
		['B' - 'A'] = 3,
		['C' - 'A'] = 3,
		['M' - 'A'] = 3,
		['P' - 'A'] = 3,
		['F' - 'A'] = 4,
		['H' - 'A'] = 4,
		['V' - 'A'] = 4,
		['W' - 'A'] = 4,
		['Y' - 'A'] = 4,
		['K' - 'A'] = 5,
		['J' - 'A'] = 8,
		['X' - 'A'] = 8,
		['Q' - 'A'] = 10,
		['Z' - 'A'] = 10
	};
	char letter;
	int sum;

	sum = 0;
	printf("Enter a word: ");
	while ((letter = getchar()) != '\n')
	{
		if (toupper(letter) < 'A' || toupper(letter) > 'Z')
		{
			printf("%d is Not a valid character. Quitting...\n", letter);
			return (1);
		}
		sum += letters[toupper(letter) - 'A'];
	}
	printf("Scrabble value: %d\n", sum);
	return (0);
}
