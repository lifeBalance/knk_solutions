/*
** Project 12
*/

#include <stdio.h>

#define WORDS		30
#define WORD_LEN	20

int main(void)
{
	int		i;
	int		j;
	char	end;
	char	sentence[WORDS][WORD_LEN + 1];

	printf("Enter a sentence: ");
	i = 0;
	j = 0;
	while ((end = getchar()) != '\n')
	{
		if (end == '.' || end == '?' || end == '!')
		{
			sentence[i][j] = '\0';
			break;
		}
		else if (end == ' ')
		{
			sentence[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			sentence[i][j] = end;
			j++;
		}
	}
	while (i >= 0)
	{
		printf("%s", sentence[i]);
		if (i > 0)
			putchar(' ');
		i--;
	}
	printf("%c\n", end);
	return (0);
}
