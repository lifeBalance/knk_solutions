/*
**	Exercise #3 (Page 49)
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int i, j, k;
	float x, y;
	float v, z;

	// printf("Enter int: ");
	// scanf("%d", &i);
	// printf("Enter int: ");
	// scanf(" %d", &j);
	// printf("First int: %d\n", i);
	// printf("Second int: %d\n", j);

	// printf("Enter three ints(dash separated): ");
	// scanf("%d-%d-%d", &a, &b, &c);
	// printf("Enter three ints(dash separated): ");
	// scanf("%d -%d -%d", &i, &j, &k);
	// printf("Ints: |%d|%d|%d|\n", a, b, c);
	// printf("Ints: |%d|%d|%d|\n", i, j, k);
	
	// printf("Enter a float: ");
	// scanf("%f", &x);
	// printf("Enter a float: ");
	// scanf("%f ", &y);
	// printf("Float: |%f|\n", x);
	// printf("Float: |%f|\n", y);

	printf("Enter two floats: ");
	scanf("%f,%f", &x, &y);
	printf("Enter two floats: ");
	scanf("%f, %f", &v, &z);
	printf("Float: |%f|%f|\n", x, y);
	printf("Float: |%f|%f|\n", v, z);
	return (0);
}
