/*
**	Exercise #05
*/

#include <stdio.h>

#define SECS_PER_MIN		60
#define SECS_PER_HOUR		3600

void split_time(long total_sec, int *hr, int *min, int *sec);

int		main(void)
{
	int		h;
	int		m;
	int		s;
	int		secs_from_mn;

	do {
		printf("Enter amount of seconds since midnight: ");
		scanf("%d", &secs_from_mn);
		if (secs_from_mn < 0)
			break;
		split_time(secs_from_mn, &h, &m, &s);
		printf("Time: %.2d:%.2d:%.2d\n", h, m, s);
	} while (secs_from_mn > 0);
	
	return (0);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / SECS_PER_HOUR;
	total_sec -= *hr * SECS_PER_HOUR;
	*min = total_sec / SECS_PER_MIN;
	total_sec -= *min * SECS_PER_MIN;
	*sec = total_sec;
}
