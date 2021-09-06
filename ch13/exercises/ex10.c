/*
**	Exercise #10
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

char *duplicate(char *q, const char *p);

int		main(void)
{
	char s1[] = "computer";
	char s2[MAX_LEN + 1];

	duplicate(s2, s1);
	printf("%s\n", s2);     // computer
	return (0);
}

char *duplicate(char *q, const char *p)
{
	strcpy(q, p);
	return (q);
}
