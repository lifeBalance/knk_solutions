/*
**	Exercise #11
*/
#include <stdio.h>

int main(void)
{
	int area_code;

	area_code = 707;
	switch (area_code)
	{
		case 229:
			printf("Albany\n");
			break ;
		case 404:
		case 470:
		case 678:
		case 770:
			printf("Atlanta\n");
			break ;
		case 478:
			printf("Macon\n");
			break ;
		case 706:
		case 762:
			printf("Columbus\n");
			break ;
		case 912:
			printf("Savannah\n");
		default:
			printf("Area code not recognized.\n");
			break ;
	}
	return (0);
}
