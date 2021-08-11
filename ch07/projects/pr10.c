/*
**	Programming project #10
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char	ch;
	int		vowels_cnt;

	vowels_cnt = 0;
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
		switch (toupper(ch))
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowels_cnt++;
		}
	printf("Your sentence contains %d vowels.\n", vowels_cnt);
	return (0);
}
