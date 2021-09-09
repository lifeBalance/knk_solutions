/*
** Project 09
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 80

int		compute_vowel_count(const char *sentence);
int		read_line(char str[], int n);

int		main(void)
{
	char	sentence[MAX_LEN + 1];

	printf("Enter a sentence: ");
	read_line(sentence, MAX_LEN);
	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
	return (0);
}

int		compute_vowel_count(const char *sentence)
{
	int		vowels_cnt;

	vowels_cnt = 0;
	while (*sentence)
	{
		switch (toupper(*sentence))
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowels_cnt++;
		}
		sentence++;
	}
	return (vowels_cnt);
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return (i);
}
