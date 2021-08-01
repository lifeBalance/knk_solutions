/*
** Project 02 (Page 34)
*/

#include <stdio.h>

#define RADIUS  10.0f
#define PI      3.14f

int main(void)
{
	float volume;

	// using 4/3 results in truncation of the quotient: 4 / 3 = 1
	volume = (4 / 3) * PI * RADIUS * RADIUS * RADIUS;
	printf("The volume of a sphere with radius %.2f is %.2f\n", RADIUS, volume);

	// use 4.0/3.0 instead
	volume = (4.0 / 3.0) * PI * RADIUS * RADIUS * RADIUS;
	printf("The volume of a sphere with radius %.2f is %.2f\n", RADIUS, volume);

	return 0;
}
