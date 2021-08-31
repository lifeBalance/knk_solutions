/*
** Project 02a
*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 80

int		read_msg(char a[], int n);
int		is_palindrome(char a[], int n);

int		main(void)
{
	char	msg[SIZE];
	int		len;

	printf("Enter a message: ");
	len = read_msg(msg, SIZE);
	if (is_palindrome(msg, len))
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
	return (0);
}

int		read_msg(char a[], int size)
{
	char	ch;
	int		i;

	i = 0;
	while (i < size && (ch = getchar()) != '\n')
	{
		a[i] = ch;
		i++;
	}
	return (i);
}

int		is_palindrome(char a[], int len)
{
	int		i;
	int		j;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		while (!isalpha(a[i]))
			i++;
		while (!isalpha(a[j]))
			j--;
		if (tolower(a[i]) != tolower(a[j]))
			return (0);
		i++;
		j--;
	}
	return (1);
}
