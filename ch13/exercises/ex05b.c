/*
**	Exercise #5b
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 80
void	capitalize(char *s);
int		read_line(char str[], int n);

int		main(void)
{
	char s[MAX_LEN + 1];

	printf("Enter string: ");
	read_line(s, MAX_LEN);
	capitalize(s);
	printf("Your string capitalized: %s\n", s);
	return (0);
}

void	capitalize(char *s)
{
	while (*s)
	{
		*s = toupper(*s);
		s++;
	}
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return (i);
}
