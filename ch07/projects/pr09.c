/*
**	Programming project #9
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int		hour;
	int		min;
	char	am_pm;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &min, &am_pm);
	if (toupper(am_pm) == 'A')
		hour += 12;
	hour = (hour == 24)? 0: hour;
	printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, min);
	return (0);
}
