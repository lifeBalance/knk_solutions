/*
**	Reverses a series of numbers using a variable-length array.
*/
#include <stdio.h>

int main(void)
{
	int	i;
	int	n;

	printf("How many numbers do you want to reverse? ");
	scanf("%d", &n);
	int	a[n];	/* Only available in C99 */
	for (i = 0; i < n; i++) {
		printf("Enter number #%d: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("In reverse order: ");
	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");
	return (0);
}
