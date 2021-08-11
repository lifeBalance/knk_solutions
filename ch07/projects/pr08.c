/*
**	Programming project #8
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int		hour;
	int		min;
	int		mins_from_midnight;
	char	am_pm;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &min, &am_pm);
	if (toupper(am_pm) == 'P')
		hour += 12;
	mins_from_midnight = (hour * 60) + min;
	if (mins_from_midnight < 8 * 60)
		printf("Closest departure time is 8:00 a.m. arriving at 3:00 p.m.\n");
	else if (mins_from_midnight < (9 * 60) + 43)
		if (mins_from_midnight - (8 * 60) < (9 * 60 + 43) - mins_from_midnight)
			printf("Closest departure time is 8:00 a.m. arriving at 3:00 p.m.\n");
		else
			printf("Closest departure time is 9:43 a.m. arriving at 11:52 p.m.\n");
	else if (mins_from_midnight < 11 * 60 + 19)
		if (mins_from_midnight - (9 * 60 + 43) < (11 * 60 + 19) - mins_from_midnight)
			printf("Closest departure time is 9:43 a.m. arriving at 11:52 p.m.\n");
		else
			printf("Closest departure time is 11:19 a.m. arriving at 1:31 p.m.\n");
	else if (mins_from_midnight < 12 * 60 + 47)
		if (mins_from_midnight - (11 * 60 + 19) < (12 * 60) + 47 - mins_from_midnight)
			printf("Closest departure time is 11:19 a.m. arriving at 1:31 p.m.\n");
		else
			printf("Closest departure time is 12:47 p.m. arriving at 3:00 p.m.\n");
	else if (mins_from_midnight < 14 * 60)
		if (mins_from_midnight - (12 * 60 + 47) < (14 * 60) - mins_from_midnight)
			printf("Closest departure time is 12:47 p.m. arriving at 3:00 p.m.\n");
		else
			printf("Closest departure time is 2:00 p.m. arriving at 4:08 p.m.\n");
	else if (mins_from_midnight < 15 * 60 + 45)
		if (mins_from_midnight - (14 * 60) < (15 * 60 + 45) - mins_from_midnight)
			printf("Closest departure time is 2:00 p.m. arriving at 4:08 p.m.\n");
		else
			printf("Closest departure time is 3:45 p.m. arriving at 5:55 p.m.\n");
	else if (mins_from_midnight < 19 * 60)
		if (mins_from_midnight - (15 * 60 + 45) < (19 * 60) - mins_from_midnight)
			printf("Closest departure time is 3:45 p.m. arriving at 5:55 p.m.\n");
		else
			printf("Closest departure time is 7:00 p.m. arriving at 9:20 p.m.\n");
	else if (mins_from_midnight < (21 * 60) + 45) {
		if (mins_from_midnight - (19 * 60) < (21 * 60 + 45) - mins_from_midnight)
			printf("Closest departure time is 7:00 p.m. arriving at 9:20 p.m.\n");
		else
			printf("Closest departure time is 9:45 p.m. arriving at 11:58 p.m.\n");
	} else
		printf("Closest departure time is 9:45 p.m. arriving at 11:58 p.m.\n");
	return (0);
}
