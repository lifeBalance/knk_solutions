/*
**	Programming project #13
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int		i;
	char	initial;
	char	temp;
	char	last_name[20];

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);
	temp = getchar();
	while (toupper(temp) >= 'A' && toupper(temp) <= 'Z')
		temp = getchar();
	while (temp == ' ')
		temp = getchar();
	i = 0;
	last_name[i] = temp;
	while ((temp = getchar()) != '\n')
	{
		i++;
		last_name[i] = temp;
	}
	printf("%s, %c.\n", last_name, initial);
	return (0);
}
