/*
** ex03.c
*/

#include <stdio.h>

int main(void)
{
	int height = 8;
	int length = 12;
	int width = 10;
	int volume;

	volume = height * length * width;
	printf("Dimensions: %d x %d x %d inches\n", height, length, width);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
	return 0;
}
