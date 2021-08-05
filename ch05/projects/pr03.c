/*
**	Programming project #3
*/

#include <stdio.h>

int main(void)
{
	int		shares_qty;
	float	share_price;
	float	commissionA;
	float	commissionB;
	float	value;

	printf("Enter number of shares: ");
	scanf("%d", &shares_qty);
	printf("Enter value of share: ");
	scanf("%f", &share_price);
	value = shares_qty * share_price;
	if (value < 2500.0f)
		commissionA = 30.0f + (.017f * value);
	else if (value < 6250.0f)
		commissionA = 56.0f + (.0066f * value);
	else if (value < 20000.0f)
		commissionA = 76.0f + (.0034f * value);
	else if (value < 50000.0f)
		commissionA = 100.0f + (.0022f * value);
	else if (value < 500000.0f)
		commissionA = 155.0f + (.0011f * value);
	else
		commissionA = 255.0f + (.0009f * value);
	if (commissionA < 39.0f)
		commissionA = 39.0f;
	/*
	**	Compute commission broker B
	*/
	if (shares_qty < 2000)
		commissionB = 33.0f + (shares_qty * .03f);
	else 
		commissionB = 33.0f + (shares_qty * .02f);
	/*
	**	Print commissions
	*/
	printf("Commission broker A: $%.2f\n", commissionA);
	printf("Commission broker B: $%.2f\n", commissionB);
	return (0);
}
