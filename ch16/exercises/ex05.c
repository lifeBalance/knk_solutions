/*
** Exercise #5
*/

#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

int		day_of_year(struct date);
int		compare_dates(struct date d1, struct date d2);

int		main(void)
{
	struct date a_date = {12, 11, 2022};
	struct date another_date = {12, 11, 2021};

	printf("Day of the year: %d\n", day_of_year(a_date));
	printf("compare: %d\n", compare_dates(a_date, another_date));
	return (0);
}

int		day_of_year(struct date dt)
{
	return (dt.day);
}

int		compare_dates(struct date d1, struct date d2)
{
	if (d1.year < d2.year)
		return (-1);
	else if (d1.year == d2.year)
		if (d1.month < d2.month)
			return (-1);
		else if (d1.month == d2.month)
			if (d1.day < d2.day)
				return (-1);
			else
				return (1);
		else
			return (1);
	else
		return (1);
}