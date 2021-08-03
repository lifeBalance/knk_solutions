/*
**	Project #3
*/

#include <stdio.h>

int main(void)
{
	int		isbn;
	int		gs1;
	int		group_id;
	int		pub_code;
	int		item;
	int		check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &pub_code, &item, &check_digit);
	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", pub_code);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", check_digit);
	return (0);
}
