/*
**	Exercise #04
*/

#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void)
{
	int month;
	int day;
	int year;

	printf("Enter month/day/year: ");
	scanf("%d / %d / %d", &month, &day, &year);
	printf("%d/%d/%d is the %d day of the year.\n", month, day, year, day_of_year(month, day, year));
	return (0);
}

int day_of_year(int month, int day, int year)
{
	int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int ret_val;
	int i;

	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		month_days[1] = 29; // leap year
	i = 0;
	while (i < month - 1)
	{
		ret_val += month_days[i];
		i++;
	}
	return (ret_val + day);
}
