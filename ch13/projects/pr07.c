/*
** Project 07
*/

#include <stdio.h>

int main(void)
{
	int		n;
	char	*ones[] = {
		"",
		"-one",
		"-two",
		"-three",
		"-four",
		"-five",
		"-six",
		"-seven",
		"-eight",
		"-nine",
	};
	char	*tens[] = {
		"",
		"ten",
		"twenty",
		"thirty",
		"forty",
		"fifty",
		"sixty",
		"seventy",
		"eighty",
		"ninety",
		"",
		"eleven",
		"twelve",
		"thirteen",
		"fourteen",
		"fifteen",
		"sixteen",
		"seventeen",
		"eighteen",
		"nineteen",
	};

	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	printf("You entered the number ");
	if (n >= 11 && n <= 19)
		printf("%s", tens[n]);
	else {
		printf("%s", tens[n / 10]);
		printf("%s", ones[n % 10]);
	}
	printf("\n");
	return (0);
}
