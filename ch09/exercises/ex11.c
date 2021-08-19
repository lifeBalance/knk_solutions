/*
**	Exercise #11
*/

#include <stdio.h>

int compute_GPA(char grades[], int n);

int main(void)
{
	char arr[] = {'A', 'C', 'B', 'D', 'F'};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Average of %d grades: %d\n", size, compute_GPA(arr, size));
	return 0;
}

int compute_GPA(char grades[], int n)
{
	char values[] = {'F', 'D', 'C', 'B', 'A'};
	int sum;
	int i;
	int j;

	sum = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < 5)
		{
			if (grades[i] == values[j])
			{
				sum += j;
				break;
			}
			j++;
		}
		i++;
	}
	return (sum / n);
}
