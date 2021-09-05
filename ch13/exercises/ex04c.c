/*
**	Exercise #4c
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
	while (i < n - 1 && (ch = getchar()) != '\n')
		str[i++] = ch;
	str[i++] = '\n';
	str[i] = '\0';
	return (i);
}

