/*
**	Exercise #8
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int		main(void)
{
	char str[MAX_LEN + 1];

	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");
	printf("%s\n", str);   // tired-or-wired?
	return (0);
}
