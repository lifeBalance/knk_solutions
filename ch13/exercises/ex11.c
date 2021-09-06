/*
**	Exercise #11
*/

#include <stdio.h>

int		my_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "abc";
	char s2[] = "computer";
	char s3[] = "computers";
	char s4[] = "Computer";

	printf("%d\n", my_strcmp(s1, s2));
	printf("%d\n", my_strcmp(s2, s2));
	printf("%d\n", my_strcmp(s2, s3));
	printf("%d\n", my_strcmp(s3, s4));
	return (0);
}

int		my_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
