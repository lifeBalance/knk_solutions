/*
**	Exercise #07
*/

#include <stdio.h>

void	split_date(int day_of_year, int year, int *month, int *day);

int		main(void)
{
	int day_of_year;
	int day;
	int month;
	int year;

	do
	{
		printf("Enter a year (0 to quit): ");
		scanf("%d", &year);
		if (year == 0)
			break;
		printf("Enter a day of the year (0 to quit): ");
		scanf("%d", &day_of_year);
		if (day_of_year == 0)
			break;
		split_date(day_of_year, year, &month, &day);
		printf("day: %d, month: %d\n", day, month);
	} while (year > 0 && day > 0);
	return (0);
}

void	split_date(int day_of_year, int year, int *month, int *day)
{
	int i;
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
			days_in_month[1] = 29;
	for (i = 0; i < 12; i++)
	{
		if (day_of_year > days_in_month[i])
			day_of_year -= days_in_month[i];
		else
			break;
	}
	*month = i + 1;
	*day = day_of_year;
}
