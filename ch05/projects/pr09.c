/*
**	Programming project #9
*/

#include <stdio.h>

int main(void)
{
	int d1_year;
	int d1_month;
	int d1_day;
	int d2_year;
	int d2_month;
	int d2_day;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1_month, &d1_day, &d1_year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2_month, &d2_day, &d2_year);
	if (d1_year != d2_year)
		if (d1_year < d2_year)
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
		else
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d2_month, d2_day, d2_year, d1_month, d1_day, d1_year);
	else if (d1_month != d2_month)
		if (d1_month < d2_month)
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
		else
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d2_month, d2_day, d2_year, d1_month, d1_day, d1_year);
	else
		if (d1_day < d2_day)
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
		else
			printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
			d2_month, d2_day, d2_year, d1_month, d1_day, d1_year);
	return (0);
}
