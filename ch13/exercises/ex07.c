/*
**	Exercise #7
*/

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[] = "hello";

	// *str = 0;
	// str[0] = '\0';
	// strcpy(str, "");
	strcat(str, "");
	printf("%s\n", str);
	return (0);
}
