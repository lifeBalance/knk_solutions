/*
** Project 14
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE		26
#define WORD_LEN	20

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	char	word1[WORD_LEN];
	char	word2[WORD_LEN];

	printf("Enter first word: ");
	scanf("%s", word1);
	printf("Enter second word: ");
	scanf("%s", word2);
	if (are_anagrams(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	return (0);
}

bool are_anagrams(const char *word1, const char *word2)
{
	char	alpha_freq[SIZE] = {0};
	int		i;

	while (*word1)
	{
		if (isalpha(*word1))
			alpha_freq[tolower(*word1) - 'a']++;
		word1++;
	}
	while (*word2)
	{
		if (isalpha(*word2))
			alpha_freq[tolower(*word2) - 'a']--;
		word2++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (alpha_freq[i])
			return (false);
		i++;
	}
	return (true);
}
