/*
** Project 17
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 80

bool	is_palindrome(const char *message);
int		read_line(char a[], int n);

int		main(void)
{
	char	msg[SIZE + 1];

	printf("Enter a message: ");
	read_line(msg, SIZE);
	if (is_palindrome(msg))
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
	return (0);
}

int		read_line(char a[], int n)
{
	char	ch;
	int		i;

	i = 0;
	while ((ch = getchar()) != '\n')
		if (i < n)
			a[i++] = ch;
	a[i] = '\0';
	return (i);
}

bool	is_palindrome(const char *message)
{
	char	*ptr_end;
	
	while (*ptr_end)
		ptr_end++;
	ptr_end--;
	while (message < ptr_end)
	{
		while (!isalpha(*message))
			message++;
		while (!isalpha(*ptr_end))
			ptr_end--;
		if (tolower(*message) != tolower(*ptr_end))
			return (false);
		message++;
		ptr_end--;
	}
	return (true);
}
