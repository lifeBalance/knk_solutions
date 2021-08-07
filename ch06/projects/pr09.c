/*
**	Programmming project #9
*/

#include <stdio.h>

int main(void)
{
	float	amount;
	float	rate;
	float	payment;
	int		amount_payments;
	int		i;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter amount of payments: ");
	scanf("%d", &amount_payments);
	/*
	**	Compute total amount and payment amount.
	*/
	amount += amount * (rate / 100.0) / 12;
	payment = amount / amount_payments;
	for (i = 1; i < amount_payments; i++) {
		amount -= payment;
		printf("Balance remaining after payment #%d: $%.2f\n", i, amount);
	}
	return (0);
}
