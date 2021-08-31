/*
** Project 05
*/

#include <stdio.h>

int main(void)
{
	char	end;
	char	sentence[80] = {0};
	char	*ptr;
	char	*w_start;
	char	*w_end;

	printf("Enter a sentence: ");
	ptr = sentence;
	while ((end = getchar()) != '\n')
	{
		if (end != '.' && end != '?' && end != '!')
			*ptr = end;
		else
			break;
		ptr++;
	}
	for (w_start = ptr, w_end = ptr; ptr >= sentence; ptr--, w_start--)
	{
		if (*ptr == ' ')
		{
			w_start++;
			while (w_start <= w_end)
			{
				putchar(*w_start);
				w_start++;
			}
			putchar(' ');
			w_start = ptr - 1;
			w_end = ptr - 1;
		}
		else if (ptr == sentence)
		{
			while (w_start <= w_end)
			{
				putchar(*w_start);
				w_start++;
			}
		}
	}
	printf("%c\n", end);
	return (0);
}
