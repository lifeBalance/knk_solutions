/*
**	Programming project #6
*/

#include <stdio.h>
#include <ctype.h>

#define MAX 80

int main(void)
{
	char	message[MAX];
	char	ch;
	int		cntr;
	int		i;

	printf("Enter message: ");
	cntr = 0;
	while ((ch = getchar()) != '\n' && cntr < 80)
	{
		message[cntr] = ch;
		cntr++;
	}
	printf("In B1FF-speak: ");
	i = 0;
	while (i < cntr)
	{
		ch = message[i];
		if (ch >= 'a' && ch <= 'z')
			ch = toupper(ch);
		if (ch == 'A')
			putchar('4');
		else if (ch == 'B')
			putchar('8');
		else if (ch == 'E')
			putchar('3');
		else if (ch == 'I')
			putchar('1');
		else if (ch == 'O')
			putchar('0');
		else if (ch == 'S')
			putchar('5');
		else
			putchar(ch);
		i++;
	}
	printf("!!!!!!!!!!\n");
	return (0);
}
