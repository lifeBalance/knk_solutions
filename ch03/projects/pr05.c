/*
**	Project #5
*/
#include <stdio.h>

int main(void)
{
	int		n1, n2, n3, n4;
	int		n5, n6, n7, n8;
	int		n9, n10, n11, n12;
	int		n13, n14, n15, n16;
	int		row1;
	int		row2;
	int		row3;
	int		row4;
	int		col1;
	int		col2;
	int		col3;
	int		col4;
	int		col_sums;
	int		dia_lr;
	int		dia_rl;
	
	printf("Enter numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	scanf("%d %d %d %d", &n5, &n6, &n7, &n8);
	scanf("%d %d %d %d", &n9, &n10, &n11, &n12);
	scanf("%d %d %d %d", &n13, &n14, &n15, &n16);
	printf("%2d %2d %2d %2d\n", n1, n2, n3, n4);
	printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
	printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
	printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);
	row1 = n1  + n2  + n3  + n4;
	row2 = n5  + n6  + n7  + n8;
	row3 = n9  + n10 + n11 + n12;
	row4 = n13 + n14 + n15 + n16;
	col1 = n1 + n5 + n9  + n13;
	col2 = n2 + n6 + n10 + n14;
	col3 = n3 + n7 + n11 + n15;
	col4 = n4 + n8 + n12 + n16;
	dia_lr = n1 + n6 + n11 + n16;
	dia_rl = n4 + n7 + n10 + n13;
	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
	printf("Diagonal sums: %d %d\n", dia_rl, dia_lr);
	return (0);
}
