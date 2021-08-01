/*
** Project 03 (Page 34)
*/

#include <stdio.h>

#define PI	3.14f

int main(void)
{
	float radius;
	float volume;

	printf("Enter a radius of the sphere: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * PI * radius * radius * radius;
	printf("The volume of a sphere with radius %.2f is %.2f\n", radius, volume);

	return (0);
}
