/*
** Project #4
*/
#include <stdio.h>

int main(void)
{
	int n;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;

	printf("Enter a number between 0-32767: ");
	scanf("%d", &n);
	first = n % 8;
	n /= 8;
	second = n % 8;
	n /= 8;
	third = n % 8;
	n /= 8;
	fourth = n % 8;
	n /= 8;
	fifth = n % 8;
	n /= 8;
	printf("In octal your number is: %d%d%d%d%d\n", fifth, fourth, third, second, first);
	return (0);
}
