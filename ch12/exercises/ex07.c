/*
**	Exercise #07
*/

#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
	int a[] = {234, 55, -6};
	int key;
	int size = sizeof(a) / sizeof(a[0]);

	do
	{
		printf("Enter element to search(q to quit): ");
		if (scanf("%d", &key) != 1)
			break;
		if (search(a, size, key))
			printf("%d was found!\n", key);
		else
			printf("%d was not found!\n", key);
	} while (1);
	return (0);
}

bool search(const int a[], int n, int key)
{
	const int	*ptr;

	for (ptr = a; ptr < a + n; ptr++)
		if (*ptr == key)
			return (true);
	return (false);
}
