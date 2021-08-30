/*
**	Exercise #13
*/

#include <stdio.h>

#define N 10

void print_matrix(double m[][N], int n);

int main(void)
{
	double	ident[N][N];
	double	*dptr;
	int		zeros;

	dptr = ident[0];
	zeros = N;
	while (dptr < ident[0] + N * N)
	{
		if (zeros == N)
		{
			*dptr = 1;
			zeros = 0;
		}
		else
		{
			*dptr = 0;
			zeros++;
		}
		dptr++;
	}
	print_matrix(ident, N);
	return (0);
}

void print_matrix(double m[][N], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3.0lf", m[i][j]);
		printf("\n");
	}
}
