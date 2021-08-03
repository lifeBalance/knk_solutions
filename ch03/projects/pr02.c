/*
**	Project #2
*/

#include <stdio.h>

int main(void)
{
	int		item;
	float	price;
	int		year;
	int		month;
	int		day;

	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%d/%d/%d\n", item, price, month, day, year);
	return (0);
}
