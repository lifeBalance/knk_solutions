/*
**	Exercise #15
*/

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
	printf("Median: %.2lf\n", median(3, 5, 7));
	printf("Median: %.2lf\n", median(3, 7, 5));
	printf("Median: %.2lf\n", median(5, 3, 7));
	printf("Median: %.2lf\n", median(5, 7, 3));
	printf("Median: %.2lf\n", median(7, 3, 5));
	printf("Median: %.2lf\n", median(7, 5, 3));
	return (0);
}

double median(double x, double y, double z)
{
	double arr[3] = {x, y, z};
	double temp;

	if (arr[0] > arr[1])
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	if (arr[1] > arr[2])
	{
		temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
	}
	if (arr[0] > arr[1])
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	return (arr[1]);
}
