/*
** Project 13
*/

#include <stdio.h>

#define MAX_LEN 80

void	encrypt(char *message, int shift);
int		read_line(char str[], int n);

int		main(void)
{
	char	msg[MAX_LEN + 1];
	int		shift;

	printf("Enter message to be encrypted: ");
	read_line(msg, MAX_LEN);
	printf("Enter shift amount: ");
	scanf("%d", &shift);
	encrypt(msg, shift);
	printf("Your encrypted message:\n%s\n", msg);
	return (0);
}

void	encrypt(char *message, int shift)
{
	while (*message)
	{
		if (*message >= 'a' && *message <= 'z')
			*message = ((*message - 'a') + shift) % 26 + 'a';
		if (*message >= 'A' && *message <= 'Z')
			*message = ((*message - 'A') + shift) % 26 + 'A';
		message++;
	}
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return (i);
}
