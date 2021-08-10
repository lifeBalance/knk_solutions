/*
**	Exercise #15
*/

#include <stdio.h>

int main(void)
{
	typedef	char Int8;
	typedef	short Int16;
	typedef	int Int32;

	Int8	charlie = 1;
	Int16	shortie = 1;
	Int32	big_guy = 1;
	printf("Int8 takes %ld bits\n", sizeof(charlie) * 8);
	printf("Int16 takes %ld bits\n", sizeof(shortie) * 8);
	printf("Int32 takes %ld bits\n", sizeof(big_guy) * 8);
	return (0);
}
