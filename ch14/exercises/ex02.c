/*
**	Exercise #2
*/

#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void)
{
	int		arr[] = {1, 3, 5};
	char	str[] = "abc";

	printf("Size: %ld\n", NELEMS(arr)); // 3
	printf("Size: %ld\n", NELEMS(str)); // 4 (null character)
	return (0);
}
