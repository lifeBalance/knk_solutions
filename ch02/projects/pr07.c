/*
** Project 07 (Page 34)
*/

#include <stdio.h>

#define TWENTIES	20
#define TENS		10
#define FIVES		5
#define ONES		1

int main(void)
{
	float amount;
	float amount_copy;
	int twenties;
	int tens;
	int fives;
	int ones;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	amount_copy = amount;
	
	twenties = amount / TWENTIES;
	amount = amount - (TWENTIES * twenties);

	tens = amount / TENS;
	amount = amount - (TENS * tens);

	fives = amount / FIVES;
	amount = amount - (FIVES * fives);

	ones = amount / ONES;
	amount = amount - (ONES * ones);

	printf("You can pay $%.2f using: \n", amount_copy);
	printf("* %d bills of $20 \n", twenties);
	printf("* %d bills of $10\n", tens);
	printf("* %d bills of $5\n", fives);
	printf("* %d bills of $1\n", ones);

	return (0);
}
