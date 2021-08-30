/*
**	Exercise #14
*/

#include <stdio.h>
#include <stdbool.h>

bool search(const float a[], int n, float temp);

int main(void)
{
	float	temperatures[7][24] = { {23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{22.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{23.0, 32.0, 27.1, 28.3, 29.4, 30.5, 28.9},
									{23.0, 32.0, 27.1, 28.3, 29.4, 69.5, 28.9}};
	int		size = 7 * 24;
	float	temp;

	do
	{
		printf("Enter temperature value to search(q to quit): ");
		if (scanf("%f", &temp) != 1)
			break;
		if (search(temperatures[0], size, temp))
			printf("%.2f was found!\n", temp);
		else
			printf("%.2f was not found!\n", temp);
	} while (1);
	return (0);
}

bool search(const float a[], int n, float temp)
{
	const float	*ptr;

	for (ptr = a; ptr < a + n; ptr++)
		if (*ptr == temp)
			return (true);
	return (false);
}
