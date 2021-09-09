/*
** Project 10
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

void	reverse_name(char *name);
int		read_line(char str[], int n);

int		main(void)
{
	char	full_name[MAX_LEN + 1];

	printf("Enter a first and last name: ");
	read_line(full_name, MAX_LEN);
	reverse_name(full_name);
	printf("%s\n", full_name);
	return (0);
}

void	reverse_name(char *name)
{
	char initial[3];
	char *ptr;

	ptr = name;
	while (*ptr == ' ')
		ptr++;
	// sprintf(initial, "%c%s", *ptr, ".\0");
	initial[0] = *ptr;
	initial[1] = '.';
	initial[2] = '\0';
	while (*ptr != ' ')
		ptr++;
	while (*ptr == ' ')
		ptr++;
	strcpy(name, ptr);
	strcat(name, " ");
	strcat(name, initial);
}

int		read_line(char str[], int n)
{
	int ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return (i);
}
