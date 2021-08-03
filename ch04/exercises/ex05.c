/*
** Exercise #5
*/

#include <stdio.h>

int main(void)
{
	printf("%2d %% %2d = %2d\n",  8, 5,   8 % 5); /* 3 */
	printf("%2d %% %2d = %2d\n", -8, 5,  -8 % 5); /* -3 */
	printf("%2d %% %2d = %2d\n",  8, -5,  8 %-5); /* 3 */
	printf("%2d %% %2d = %2d\n", -8, -5, -8 %-5); /* -3 */
	return (0);
}
