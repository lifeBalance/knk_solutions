/*
** Project 04 (Page 34)
*/

#include <stdio.h>

#define TAX		0.05f

int main(void)
{
	float amount;
	float after_tax;

	printf("Enter an amount in $: ");
	scanf("%f", &amount);

	after_tax = amount + (amount * TAX);
	printf("$%.2f after adding %.1f%% in taxes is $%.2f\n", amount, TAX * 100, after_tax);

	return (0);
}
