/*
**	Programming project #14
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int		i;
	int		j;
	int		len;
	char	end;
	char	sentence[80] = {0};

	printf("Enter a sentence: ");
	i = 0;
	while ((end = getchar()) != '\n')
	{
		if (end != '.' && end != '?' && end != '!')
			sentence[i] = end;
		else
			break;
		i++;
	}
	while (i > 0)
	{
		len = 0;
		while (i > 0 && sentence[i - 1] != ' ')
		{
			i--;
			len++;
		}
		j = i;
		i = (i > 0) ? i - 1 : i;
		while (len)
		{
			putchar(sentence[j]);
			len--;
			j++;
		}
		if (i > 0)
			putchar(' ');
	}
	putchar(end);
	return (0);
}
