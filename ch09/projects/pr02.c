/*
**	Programming project #2
*/

#include <stdio.h>

float find_tax_due(float taxable_income);

int main(void)
{
	float	taxable_income;

	printf("Enter amount of taxable income: ");
	scanf("%f", &taxable_income);
	printf("Tax due: $%.2f\n", find_tax_due(taxable_income));
	return (0);
}

float find_tax_due(float taxable_income)
{
	float	tax_due;

	if (taxable_income > 7000)
		tax_due = 230 + ((taxable_income - 7000) * 0.06);
	else if (taxable_income > 5250)
		tax_due = 142.50 + ((taxable_income - 5250) * 0.05);
	else if (taxable_income > 3750)
		tax_due = 82.50 + ((taxable_income - 3750) * 0.04);
	else if (taxable_income > 2250)
		tax_due = 37.50 + ((taxable_income - 2250) * 0.03);
	else if (taxable_income > 750)
		tax_due = 7.50 + ((taxable_income - 750) * 0.02);
	else
		tax_due = (taxable_income * 0.01);
	return (tax_due);
}