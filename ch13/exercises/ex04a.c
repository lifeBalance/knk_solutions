/*
**	Exercise #4a
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 10

int		read_line(char str[], int n);

int main(void)
{
	char s[MAX_LEN + 1];

	printf("Enter a string: ");
	read_line(s, MAX_LEN);
	printf("|%s|\n", s);
	return (0);
}

int		read_line(char str[], int n)
{
	int ch;
	int i;

	while (isspace(ch = getchar()))
		continue;
	str[0] = ch;
	i = 1;
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return (i);
}

