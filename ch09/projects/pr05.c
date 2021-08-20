/*
**	Programming project #5
*/

#include <stdio.h>

#define I 0
#define J 1

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
	int size;

	printf("This program creates a magic square of the specified size.\n");
	printf("The size must be a number between 1 and 99.\n");
	printf("Enter size of the magic square: ");
	scanf("%d", &size);
	char arr[size][size];	// VLA
	create_magic_square(size, arr);
	print_magic_square(size, arr);
	return (0);
}

void create_magic_square(int n, char magic_square[n][n])
{
	int i;
	int j;
	int num;
	int prev[2];

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			magic_square[i][j] = 0;
	i = 0;
	j = n / 2;
	num = 1;
	while (num <= (n * n))
	{
		if (magic_square[i][j] == 0)
		{
			magic_square[i][j] = num;
			prev[I] = i;
			prev[J] = j;
			num++;
		}
		else
		{
			i = prev[I] + 1;
			j = prev[J];
			continue;
		}
		i = (i - 1 < 0) ? (n - 1) : (i - 1);
		j = (j + 1 > n - 1) ? 0 : (j + 1);
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("  %3d", magic_square[i][j]);
		putchar('\n');
	}
}
