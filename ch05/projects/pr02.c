/*
**	Programming project #2
*/

#include <stdio.h>

int main(void)
{
	int h;
	int m;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	if (h >= 13 && h <= 23)
	{
		h -= 12;
		printf("Equivalent 12-hour time: %d:%.2d PM\n", h, m);
	}
	else if (h == 0)
	{
		h = 12;
		printf("Equivalent 12-hour time: %d:%.2d AM\n", h, m);
	}
	else if (h == 12)
		printf("Equivalent 12-hour time: %d:%.2d PM\n", h, m);
	else
		printf("Equivalent 12-hour time: %d:%.2d AM\n", h, m);
	return (0);
}
