/*
** Project 01
*/

#include <stdio.h>

#define TWENTIES	20
#define TENS		10
#define FIVES		5
#define ONES		1

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	float	dollars;
	int		twenties;
	int		tens;
	int		fives;
	int		ones;

	printf("Enter a dollars amount: ");
	scanf("%f", &dollars);
	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	printf("You can pay $%.2f using: \n", dollars);
	printf("* %d bills of $20 \n", twenties);
	printf("* %d bills of $10\n", tens);
	printf("* %d bills of $5\n", fives);
	printf("* %d bills of $1\n", ones);
	return (0);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / TWENTIES;
	dollars = dollars - (TWENTIES * *twenties);

	*tens = dollars / TENS;
	dollars = dollars - (TENS * *tens);

	*fives = dollars / FIVES;
	dollars = dollars - (FIVES * *fives);

	*ones = dollars / ONES;
	dollars = dollars - (ONES * *ones);
}
