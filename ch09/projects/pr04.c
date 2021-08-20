/*
**	Programming project #4
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
	int	word1[SIZE] = {0};
	int	word2[SIZE] = {0};

	printf("Enter first word: ");
	read_word(word1);
	printf("Enter second word: ");
	read_word(word2);
	if (equal_array(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	return (0);
}

void read_word(int counts[SIZE])
{
	char ch;

	while ((ch = getchar()) != '\n')
		if (isalpha(ch))
			counts[tolower(ch) - 'a']++;
}

bool equal_array(int counts1[SIZE], int counts2[SIZE])
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (counts1[i] != counts2[i])
			return (false);
		i++;
	}
	return (true);
}