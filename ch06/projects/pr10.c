/*
**	Programming project #10
*/

#include <stdio.h>

int main(void)
{
	int earliest_date_year;
	int earliest_date_month;
	int earliest_date_day;
	int temp_year;
	int temp_month;
	int temp_day;

	earliest_date_year = 9999;
	earliest_date_month = 9999;
	earliest_date_day = 9999;
	temp_year = 9999;
	temp_month = 9999;
	temp_day = 9999;
	while (1) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &temp_month, &temp_day, &temp_year);
		if (temp_year == 0 && temp_month == 0 && temp_day == 0)
			break ;
		if (earliest_date_year != temp_year) {
			if (earliest_date_year > temp_year) {
					earliest_date_year = temp_year;
					earliest_date_month = temp_month;
					earliest_date_day = temp_day;
			}
		} else if (earliest_date_month != temp_month) {
			if (earliest_date_month > temp_month) {
				earliest_date_year = temp_year;
				earliest_date_month = temp_month;
				earliest_date_day = temp_day;
			}
		} else if (earliest_date_day > temp_day) {
			earliest_date_year = temp_year;
			earliest_date_month = temp_month;
			earliest_date_day = temp_day;
		}
	}
	printf("%d/%d/%d is the earliest date.\n",
	earliest_date_month, earliest_date_day, earliest_date_year);
	return (0);
}
