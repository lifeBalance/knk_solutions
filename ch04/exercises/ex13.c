/*
** Exercise #13
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	printf("(a) %d\n", i++);	// 0
	printf("(a) %d\n", i);		// 0
	/*
	** ++i is equivalent to i += 1, because the side effect (i increasing
	** its value) takes place simultaneously as the expression is
	** evaluated.
	** i++ is not equivalent to i += 1, because the side effect takes place
	** after i evaluates to its initial value, 0.
	*/
	i = 0;
	printf("(b) %d\n", ++i);	// 1
	printf("(b) %d\n", i);		// 1
	i = 0;
	printf("(c) %d\n", i += 1);	// 1
	printf("(c) %d\n", i);		// 1
	return (0);
}
