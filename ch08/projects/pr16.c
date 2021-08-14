/*
**	Programming project #15
*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void)
{
	char	alpha_freq[SIZE] = {0};
	char	ch;
	int		i;

	printf("Enter first word: ");
	while ((ch = getchar()) != '\n')
		if (isalpha(ch))
			alpha_freq[tolower(ch) - 'a']++;
	printf("Enter second word: ");
	while ((ch = getchar()) != '\n')
		if (isalpha(ch))
			alpha_freq[tolower(ch) - 'a']--;
	i = 0;
	while (i < SIZE)
	{
		if (alpha_freq[i])
		{
			printf("The words are not anagrams.\n");
			return (0);
		}
		i++;
	}
	printf("The words are anagrams.\n");
	return (0);
}
