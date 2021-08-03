/*
**	Project #1
*/

#include <stdio.h>

int main(void)
{
	int y;
	int m;
	int d;

	printf("Enter a date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("Year: %d, Month: %d, Day: %d\n", y, m, d);
	return (0);
}
