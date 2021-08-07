/*
**	Programming project #1
*/

#include <stdio.h>

int main(void)
{
	float largest;
	float num;

	largest = 0;
	num = 0;
	do {
		printf("Enter a number: ");
		scanf("%f", &num);
		if (num > largest)
			largest = num;
	} while (num > 0);
	printf("\nThe largest number entered was: %.2f\n", largest);
	return (0);
}
