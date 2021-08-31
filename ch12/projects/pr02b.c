/*
** Project 02b
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
		*a = ch;
		a++;
		i++;
	}
	return (i);
}

int		is_palindrome(char a[], int len)
{
	char	*p1;
	char	*p2;

	p1 = a;
	p2 = a + len - 1;
	while (p1 < p2)
	{
		while (!isalpha(*p1))
			p1++;
		while (!isalpha(*p2))
			p2--;
		if (tolower(*p1) != tolower(*p2))
			return (0);
		p1++;
		p2--;
	}
	return (1);
}
