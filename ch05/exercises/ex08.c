/*
**	Exercise #8
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool teenager;
	int age;

	printf("Enter age: ");
	scanf("%d", &age);
	// teenager = (age >= 13 && age <= 19)? true : false;
	teenager = (age >= 13) && (age <= 19);
	if (teenager)
		printf("It's a teen!\n");
	else
		printf("It's not a teen!\n"); 
	return (0);
}
