/*
** Project 02
*/

#include <stdio.h>

void	find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
int		absolute_value(int num);

int		main(void)
{
	int hour;
	int min;
	int desired_time;
	int departure_time;
	int arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);
	desired_time = (hour * 60) + min;
	find_closest_flight(desired_time, &departure_time, &arrival_time);
	hour = departure_time / 60;
	min  = departure_time % 60;
	printf("Closest departure time is %d:%.2d", hour, min);
	hour = arrival_time / 60;
	min  = arrival_time % 60;
	printf(" arriving at %d:%.2d\n", hour, min);
	return (0);
}

void	find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	int		departures[] = {480, 583, 679, 767, 840,  945, 1140, 1305};
	int		arrivals[]   = {900, 712, 811, 900, 968, 1075, 1280, 1438};
	int		size = sizeof(departures) / sizeof(departures[0]);
	int		idx_closest = 0;
	int		closest_dep = absolute_value(desired_time - departures[0]);

	for (int i = 0; i < size; i++)
	{
		if (desired_time > departures[size - 1])
		{
			idx_closest = size - 1;
			break;
		}
		if (absolute_value(desired_time - departures[i]) < closest_dep)
		{
			closest_dep = absolute_value(desired_time - departures[i]);
			idx_closest = i;
		}
	}
	*departure_time = departures[idx_closest];
	*arrival_time = arrivals[idx_closest];
}

int		absolute_value(int num)
{
	return (num > 0 ? num : -num);
}
