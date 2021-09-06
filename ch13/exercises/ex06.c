/*
**	Exercise #6
*/

#include <stdio.h>

#define MAX_LEN 80

void	censor(char *s);
int		read_line(char str[], int n);

int		main(void)
{
	char s[MAX_LEN + 1];

	printf("Enter string: ");
	read_line(s, MAX_LEN);
	censor(s);
	printf("Your censored string: %s\n", s);
	return (0);
}

void	censor(char *s)
{
	while (*(s + 2))
	{
		if (*s == 'f' && *(s + 1) == 'o' && *(s + 2) == 'o')
			*s = *(s + 1) = *(s + 2) = 'x';
		s++;
	}
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while (i < n && (ch = getchar()) != '\n')
		str[i++] = ch;
	str[i] = '\0';
	return (i);
}
