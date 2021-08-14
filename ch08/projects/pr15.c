/*
**	Programming project #15
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char	msg[80] = {0};
	char	ch;
	int		shift;
	int		i;
	int		j;

	printf("Enter message to be encrypted: ");
	i = 0;
	while (i < 80 && (msg[i] = getchar()) != '\n')
		i++;
	printf("Enter shift amount: ");
	scanf("%d", &shift);
	j = 0;
	while (j <= i)
	{
		ch = msg[j];
		if (ch >= 'a' && ch <= 'z')
			msg[j] = ((ch - 'a') + shift) % 26 + 'a';
		if (ch >= 'A' && ch <= 'Z')
			msg[j] = ((ch - 'A') + shift) % 26 + 'A';
		putchar(msg[j]);
		j++;
	}
	return (0);
}
