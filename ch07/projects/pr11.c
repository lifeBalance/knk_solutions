/*
**	Programming project #11
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char	initial;
	char	ch;

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);
	while ((ch = getchar()) != ' ')
		continue ;
	while ((ch = getchar()) == ' ')
		continue ;
	while (ch != ' ' && ch != '\n') {
		putchar(ch);
		ch = getchar();
	}
	printf(", %c.\n", initial);
	return (0);
}
