/*
** Name:	dweight.c (Page 20)
** Purpose:	Computes the dimensional weight of a 12" x 10" x 8" box.
**
** 	This program uses only integers to compute the "dimensional weight" of a
** box, which is used by shipping companies to charge for packages that are
** large but lightweight.
** 
** 	The usual method is to divide the volume by 166, the standard amount of
** cubic inches per pound. If the dimensional weight exceeds the real weight
** the customer is charged for the dimensional weight.
*/

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;
	
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	/* Since we are using integers, we can't use the simple formula:
	** 			dweight = volume / 166
	** 	We would lose information due to integer truncation, and the
	** result would be rounded down. The company wants the opposite,
	** to round up, which we can achieve by adding 165 before dividing.
	*/ 
	weight = (volume + 165) / 166;
	printf("Dimensions: %d x %d x %d inches\n", height, length, width);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	return 0;
}
