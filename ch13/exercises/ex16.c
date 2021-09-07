/*
**	Exercise #16
*/

#include <stdio.h>

int count_spaces(const char s[]);

int main(void)
{
	printf("%d\n", count_spaces("ab cd"));
	printf("%d\n", count_spaces("a b c d"));
	return 0;
}

int count_spaces(const char s[])
{
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return (count);
}
