/*
**	Exercise #13
*/

#include <stdio.h>

int main(void)
{
	int m;
	int n;

	printf("Enter a number: ");
	scanf("%d", &m);
	// for (n = 0; m > 0; n++) {
	// 	m /= 2;
	// 	printf("#%d: %d\n", n, m);
	// }
	for (n = 0; m > 0; n++, m /= 2)
		printf("#%d: %d\n", n, m);
	return (0);
}
