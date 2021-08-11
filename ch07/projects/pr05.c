/*
**	Programming project #5
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letter;
	int scrabble_value;

	scrabble_value = 0;
	printf("Enter a word: ");
	while ((letter = getchar()) != '\n') {
		switch (toupper(letter)) {
			case 'A':
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
				scrabble_value += 1;
				break ;
			case 'D':
			case 'G':
				scrabble_value += 2;
				break ;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				scrabble_value += 3;
				break ;
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				scrabble_value += 4;
				break ;
			case 'K':
				scrabble_value += 5;
				break ;
			case 'J':
			case 'X':
				scrabble_value += 8;
				break ;
			case 'Q':
			case 'Z':
				scrabble_value += 10;
				break ;
			default:
				printf("%d is Not a valid character. Quitting...\n", letter);
				return (1);
		}
	}
	printf("Scrabble value: %d\n", scrabble_value);
	return (0);
}
