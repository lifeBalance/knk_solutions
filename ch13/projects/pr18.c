/*
** Project 18
*/

#include <stdio.h>

void	print_date(int month, int day, int year);

int	main(void)
{
	int month;
	int day;
	int year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &month, &day, &year);
	print_date(month, day, year);
	return (0);
}

void	print_date(int month, int day, int year)
{
	char date[80];
	char *months[] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	sprintf(date, "%s %d, %d", months[month - 1], day, year);
	printf("You entered the date %s\n", date);
}
