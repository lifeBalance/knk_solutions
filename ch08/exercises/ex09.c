/*
**	Exercise #09
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER	40
#define LOWER	15

int main(void)
{
	float	temperature_readings[30][24];
	float	daily_avg;
	float	monthly_avg;
	/*
	**	Fill the array with random temperature
	**	readings within the range 15 to 40 degrees.
	*/
	srand((unsigned)time(NULL));
	for (int i = 0; i < 30; i++)
		for (int j = 0; j < 24; j++)
			temperature_readings[i][j] = (rand() % (UPPER - LOWER + 1)) + LOWER;
	monthly_avg = 0.0;
	for (int i = 0; i < 30; i++) {
		daily_avg = 0.0;
		for (int j = 0; j < 24; j++)
			daily_avg += temperature_readings[i][j];
		monthly_avg += daily_avg / 24;
	}
	printf("Monthly average: %.2f\n", monthly_avg / 30);
	return (0);
}
