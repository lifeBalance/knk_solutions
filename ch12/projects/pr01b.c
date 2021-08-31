/*
** Project 01b
*/

#include <stdio.h>

#define SIZE 80

int		read_msg(char a[], int n);
void	print_rev(char a[], int n);

int		main(void)
{
	char	msg[SIZE];
	int		len;

	printf("Enter a message: ");
	len = read_msg(msg, SIZE);
	printf("Reversal is: ");
	print_rev(msg, len);
	return (0);
}

int		read_msg(char a[], int size)
{
	char	ch;
	char	*ptr;
	int		i;

	i = 0;
	ptr = a;
	while (ptr < a + size && ch != '\n')
	{
		*ptr = ch;
		ch = getchar();
		ptr++;
		i++;
	}
	return (i);
}

void	print_rev(char a[], int len)
{
	char	*ptr;

	ptr = a + len - 1;
	while (len >= 0)
	{
		putchar(*ptr);
		ptr--;
		len--;
	}
	putchar('\n');
}
