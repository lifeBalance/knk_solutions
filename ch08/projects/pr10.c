/*
**	Programming project #10
*/

#include <stdio.h>

#define  COMBOS 8

int main(void)
{
	char	ch;
	int		hour;
	int		min;
	int		i;
	int		abs_val;
	int		ret_val;
	int		minimum;
	int		mins_from_midnight;
	int		departures[] = {480, 583, 679, 767, 840,  945, 1140, 1305};
	int		arrivals[]   = {900, 712, 811, 900, 968, 1075, 1280, 1438};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);
	hour = (hour == 0) ? 24 : hour;
	mins_from_midnight = (hour * 60) + min;
	abs_val = mins_from_midnight - departures[0];
	abs_val = (abs_val > 0) ? abs_val : -abs_val;
	minimum = abs_val;
	ret_val = 0;
	i = 0;
	while (i < COMBOS)
	{
		if (mins_from_midnight > departures[COMBOS - 1])
		{
			ret_val = COMBOS - 1;
			break;
		}
		abs_val = mins_from_midnight - departures[i];
		abs_val = (abs_val > 0) ? abs_val : -abs_val;
		if (abs_val < minimum)
		{
			minimum = abs_val;
			ret_val = i;
		}
		i++;
	}
	hour = departures[ret_val] / 60;
	min  = departures[ret_val] % 60;
	ch = (hour > 12) ? 'p' : 'a';
	if (hour > 12)
		hour -= 12;
	printf("Closest departure time is %d:%.2d %c.m.", hour, min, ch);
	hour = arrivals[ret_val] / 60;
	min = arrivals[ret_val] % 60;
	ch = (hour > 12) ? 'p' : 'a';
	if (hour > 12)
		hour -= 12;
	printf(" arriving at %d:%.2d %c.m.\n", hour, min, ch);
	return (0);
}
