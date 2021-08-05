/*
**	Programming project #7
*/

#include <stdio.h>

int main(void)
{
	int i1;
	int i2;
	int i3;
	int i4;
	int max1;
	int min1;
	int max2;
	int min2;
	int largest;
	int smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	if (i1 >= i2)
	{
		max1 = i1;
		min1 = i2;
	}
	else 
	{
		max1 = i2;
		min1 = i1;
	}
	if (i3 >= i4)
	{
		max2 = i3;
		min2 = i2;
	}
	else 
	{
		max2 = i4;
		min2 = i3;
	}
	if (max1 >= max2)
		largest = max1;
	else 
		largest = max2;
	if (min1 <= min2)
		smallest = min1;
	else 
		smallest = min2;
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	return (0);
}
