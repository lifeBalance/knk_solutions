/*
**	Programming project #8
*/

#include <stdio.h>

int main(void)
{
	int month_days;
	int week_day;
	int start;
	int i;

	printf("Enter number of days in month: ");
	scanf("%d", &month_days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);
	for (week_day = 1, i = 1; week_day <= month_days; i++) {
		if (i < start)
			printf("  ");
		else {
			printf("%2d", week_day);
			week_day++;
		}
		if ((i % 7) == 0 || (week_day - 1) == month_days)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
