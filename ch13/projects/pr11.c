/*
** Project 11
*/

#include <stdio.h>

#define MAX_LEN 80

double	compute_average_word_length(const char *sentence);
int		read_line(char str[], int n);

int main(void)
{
	char	sentence[MAX_LEN + 1];

	printf("Enter a sentence: ");
	read_line(sentence, MAX_LEN);
	printf("Average word length: %.1f\n", compute_average_word_length(sentence));
	return (0);
}

double	compute_average_word_length(const char *sentence)
{
	double		letters;
	double		spaces;
	double		words;
	const char	*ptr;

	ptr = sentence;
	letters = 0;
	spaces = 0;
	while (*ptr)
		*ptr++ == ' ' ? spaces++ : letters++;
	words = spaces + 1;
	return (letters / words);
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
