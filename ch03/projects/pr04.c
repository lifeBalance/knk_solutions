/*
**	Project #4
*/
#include <stdio.h>

int main(void)
{
	int		area_code;
	int		prefix;
	int		subscriber;
	
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &prefix, &subscriber);
	printf("You entered: %d.%d.%d\n", area_code, prefix, subscriber);
	return (0);
}
