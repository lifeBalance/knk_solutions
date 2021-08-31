/*
** Project 01a
*/

#include <stdio.h>
#include <stdlib.h>

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
	int		i;

	i = 0;
	while (i < size && ch != '\n')
	{
		a[i] = ch;
		ch = getchar();
		i++;
	}
	return (i);
}

void	print_rev(char a[], int len)
{
	int		i;

	i = len - 1;
	while (i >= 0)
	{
		putchar(a[i]);
		i--;
	}
	putchar('\n');
}
