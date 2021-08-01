/*
** Project 08 (Page 35)
*/

#include <stdio.h>

int main(void)
{
	float amount;
	float rate;
	float monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);

	printf("Enter interest rate: ");
	scanf("%f", &rate);
	
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	// decrease the amount by the montly payment
	amount = amount - monthly_payment;
	// increase by the balance times the monthly interest rate
	amount = amount + (amount * (rate / 100.0) / 12) ;
	printf("Balance remaining after first payment: $%.2f\n", amount);

	amount = amount - monthly_payment + (amount * (rate / 100.0) / 12);
	printf("Balance remaining after second payment: $%.2f\n", amount);

	amount = amount - monthly_payment + (amount * (rate / 100.0) / 12);
	printf("Balance remaining after third payment: $%.2f\n", amount);

	return (0);
}
