/*
**	Exercise #3
*/

#include <stdio.h>

int main(void)
{
	char s[80];
	int i;
	int j;

	scanf("%d%s%d", &i, s, &j);
	printf("%d\n", i);   // 12
	printf("|%s|\n", s); // abc34
	printf("%d\n", j);   // 56
	return (0);
}
