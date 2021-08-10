/*
**	Determines the length of a message.
*/
#include <stdio.h>

int main(void)
{
	int len;
	char ch;

	len = 0;
	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n') {
		ch = getchar();
		len++;
	}
	printf("Your message was %d characters long.\n", len);
	return (0);
}
