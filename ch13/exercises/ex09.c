/*
**	Exercise #9
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int		main(void)
{
	char s1[MAX_LEN + 1];
	char s2[MAX_LEN + 1];

	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0)
		strcat(s1, s2);     // s1 == computerscience
	else
		strcat(s2, s1);
	s1[strlen(s1)-6] = '\0';
	printf("%s\n", s1);     // computers
	return (0);
}
