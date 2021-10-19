/*
**	Project #5
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE(a)			(sizeof(a) / sizeof(a[0]))
#define MIN_PER_HOUR	60

struct time {
	int departure;
	int arrival;
};

void	print_time(struct time t);
void	format_12_hour(int *hour, char *am_pm);
void	min_to_time(int *hour, int *min, int time);

int		main(void)
{
	int hour;
	int min;
	int mins_from_midnight;
	int minimum;
	int minimum_idx;
	/*
	** TIMETABLE:
	**  8:00 a.m. - 10:16 p.m
	**  9:43 a.m. - 11:52 p.m
	** 11:19 a.m. -  1:31 p.m
	** 12:47 a.m. -  3:00 p.m
	**  2:00 p.m. -  4:08 p.m
	**  3:45 p.m. -  5:55 p.m
	**  7:00 p.m. -  9:20 p.m
	**  9:45 p.m. - 11:58 p.m
	*/
	struct time times[] = {
		{ 8 * MIN_PER_HOUR,			10 * MIN_PER_HOUR + 16},
		{ 9 * MIN_PER_HOUR + 43,	11 * MIN_PER_HOUR + 52},
		{11 * MIN_PER_HOUR + 19,	13 * MIN_PER_HOUR + 31},
		{12 * MIN_PER_HOUR + 47,	15 * MIN_PER_HOUR},
		{14 * MIN_PER_HOUR,			16 * MIN_PER_HOUR + 8},
		{15 * MIN_PER_HOUR + 45,	17 * MIN_PER_HOUR + 55},
		{19 * MIN_PER_HOUR,			21 * MIN_PER_HOUR + 20},
		{21 * MIN_PER_HOUR + 45,	11 * MIN_PER_HOUR + 58}
	};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);
	hour = (hour == 0) ? 24 : hour;	/* 00:00 */
	mins_from_midnight = (hour * 60) + min;
	minimum = abs(mins_from_midnight - times[0].departure);
	minimum_idx = 0;
	for (int i = 0; i < SIZE(times); i++)
		if (abs(mins_from_midnight - times[i].departure) < minimum)
		{
			minimum = abs(mins_from_midnight - times[i].departure);
			minimum_idx = i;
		}
	print_time(times[minimum_idx]);
	return (0);
}

void	print_time(struct time t)
{
	int hour;
	int min;
	char am_pm;

	min_to_time(&hour, &min, t.departure);
	format_12_hour(&hour, &am_pm);
	printf("Closest departure time is %d:%.2d %c.m.", hour, min, am_pm);

	min_to_time(&hour, &min, t.arrival);
	format_12_hour(&hour, &am_pm);
	printf(" arriving at %d:%.2d %c.m.\n", hour, min, am_pm);
}

void	min_to_time(int *hour, int *min, int time)
{
	*hour = time / 60;
	*min = time % 60;
}

void	format_12_hour(int *hour, char *am_pm)
{
	if (*hour >= 12)
	{
		*am_pm = 'p';
		*hour = (*hour == 12)? 0 : *hour - 12;
	}
	else
		*am_pm = 'a';
}
