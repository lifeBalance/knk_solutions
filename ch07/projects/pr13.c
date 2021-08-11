/*
**	Programming project #13
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char	ch;
	int		len;
	int		words;
	float	avg;

	printf("Enter a sentence: ");
	while ((ch = getchar()) == ' ') 
		continue ;
	words = 0;
	len = 0;
	while (ch != '\n') {
		while (ch != ' ' && ch != '\n') {
			ch = getchar();
			len++;
		}
		words++;
		avg = (float)len / words;
		while (ch == ' ')
			ch = getchar();
	}
	printf("Average word length: %.1f\n", avg);
	return (0);
}
