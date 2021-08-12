/*
**	Exercise #07
*/

#include <stdio.h>

int main(void)
{
	const int segments[10][7] = {
		{1, 1, 1, 1, 1, 1},		// 0 (all segments on except number 6)
		{0, 1, 1},				// 1 (segments 1 and 2)
		{1, 1, 0, 0, 1},		// 2 (segments 0, 1, 6, 4, 3)
		{1, 1, 1, 1, 0, 0, 1},	// 3 (segments 0, 1, 2, 3, 6)
		{0, 1, 1, 0, 0, 1, 1},	// 4 (segments 1, 2, 5, 6)
		{1, 0, 1, 1, 0, 1, 1},	// 5 (segments 0, 5, 6, 2, 3)
		{1, 0, 1, 1, 1, 1, 1},	// 6 (segments 0, 5, 6, 2, 3, 4)
		{1, 1, 1},				// 7 (segments 0, 1, 2)
		{1, 1, 1, 1, 1, 1, 1},	// 8 (all segments on)
		{1, 1, 1, 1, 0, 1, 1}	// 9 (all segments except number 4)
	};
	return (0);
}
