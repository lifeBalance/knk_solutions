/*
**	Exercise #8
*/

#include <stdio.h>

#define TO_STRING(x)	#x			/* expands __LINE__ and then stringify */
#define EXPAND_NUM(x)	TO_STRING(x)
#define LINE_FILE		("Line " EXPAND_NUM(__LINE__) " of file " __FILE__)

int main(void)
{
	const char *str = LINE_FILE;
	printf("%s\n", str);
	return (0);
}
