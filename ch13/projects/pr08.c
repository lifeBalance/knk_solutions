/*
** Project 08
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 80
int compute_scrabble_value(const char *word);

int main(void)
{
	char word[MAX_LEN];

	printf("Enter a word: ");
	scanf("%s", word);
	printf("Scrabble value: %d\n", compute_scrabble_value(word));
	return (0);
}

int compute_scrabble_value(const char *word)
{
	int scrabble_value;

	scrabble_value = 0;
	while (*word)
	{
		switch (toupper(*word)) {
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
				printf("%c is Not a valid character. Quitting...\n", *word);
				return (1);
		}
		word++;
	}
	return (scrabble_value);
}
