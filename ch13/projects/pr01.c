/*
** Project 01
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int		main(void)
{
	char	smallest[MAX_LEN + 1];
	char	largest[MAX_LEN + 1];
	char	current[MAX_LEN + 1];

	printf("Enter word: ");
	scanf("%s", current);
	strcpy(largest, current);
	strcpy(smallest, current);
	while (strlen(current) != 4)
	{
		if (strcmp(current, largest) > 0)
			strcpy(largest, current);
		if (strcmp(current, smallest) < 0)
			strcpy(smallest, current);
		printf("Enter word: ");
		scanf("%s", current);
	}
	printf("\nSmallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);
	return (0);
}
