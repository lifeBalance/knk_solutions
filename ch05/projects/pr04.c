/*
**	Programming project #4
*/

#include <stdio.h>

int main(void)
{
	int		knots;

	printf("Enter wind speed in knots: ");
	scanf("%d", &knots);
	if (knots < 1)
		printf("Calm\n");
	else if (knots >=1 && knots <= 3)
		printf("Light air\n");
	else if (knots >= 4 && knots <= 27)
		printf("Breeze\n");
	else if (knots >= 28 && knots <= 47)
		printf("Gale\n");
	else if (knots >= 48 && knots <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");
	return (0);
}
