/*
**	Exercise #01
*/

#include <stdio.h>

int main(void)
{
	int	a[3];

	printf("Technique A) Size of array: %lu\n", sizeof(a) / sizeof(int));
	/*
	**	The second technique is more flexible, since allows us in the future
	**	to change the type of the array (to double for example) and still
	**	calculate its size, without having to modify the expression:
	**		sizeof(a) / sizeof(a[0])
	*/
	printf("Technique B) Size of array: %lu\n", sizeof(a) / sizeof(a[0]));
	return (0);
}
