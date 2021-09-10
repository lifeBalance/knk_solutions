/*
** Project 16
*/

#include <stdio.h>

#define MAX_LEN 80

int		read_line(char a[], int n);
void	reverse(char *message);

int		main(void)
{
	char	msg[MAX_LEN + 1];

	printf("Enter a message: ");
	read_line(msg, MAX_LEN);
	reverse(msg);	
	printf("Reversal is: %s\n", msg);
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

void reverse(char *message)
{
	char	*ptr_end;
	char	temp;

	ptr_end = message;
	while (*ptr_end)
		ptr_end++;
	ptr_end--;
	while (message < ptr_end)
	{
		temp = *message;
		*message = *ptr_end;
		*ptr_end = temp;
		message++;
		ptr_end--;
	}
}
