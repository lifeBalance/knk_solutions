/*
** Exercise #6
*/

#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time	split(long total_seconds);

int			main(void)
{
	struct time t;

	t = split(7265);
	printf("Hours: %d, Minutes: %d, Seconds: %d\n", t.hours, t.minutes, t.seconds);
	return (0);
}

struct time	split(long total_seconds)
{
	struct time t;

	t.hours = total_seconds / 3600;
	total_seconds -= (t.hours * 3600);

	t.minutes = total_seconds / 60;
	total_seconds -= (t.minutes * 60);

	t.seconds = total_seconds;
	return (t);
}
