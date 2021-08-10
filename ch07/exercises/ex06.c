/*
**	Exercise #6
*/

#include <stdio.h>

int main(void)
{
	char	days_month = 31;
	short	days_year = 365;
	short	minutes_day = 1440;
	int		seconds_day = 86400;

	printf("(a) %d\n", days_month);
	printf("(b) %d\n", days_year);
	printf("(c) %u\n", minutes_day);
	printf("(d) %u\n", seconds_day);
	return (0);
}
