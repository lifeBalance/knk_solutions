/*
** Exercise #15
*/
#include <stdio.h>

int					main(void)
{
	enum day {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
	typedef enum {MON = 1, TUE, WED, THU, FRI, SAT, SUN} Day;

	enum day d1 = TUE;
	printf("Tuesday #%d\n", d1);

	Day d2 = SUNDAY;
	printf("Sunday #%d\n", d2);
	return (0);
}
