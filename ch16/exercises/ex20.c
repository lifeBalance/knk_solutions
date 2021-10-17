/*
** Exercise #20
*/
#include <stdio.h>

int					main(void)
{
	enum {NORTH, SOUTH, EAST, WEST} direction;
	int x;
	int y;

	x = 23;
	y = 42;
	direction = NORTH;

	switch (direction)
	{
		case EAST:
			x++;
			break;
		case WEST:
			x--;
			break;
		case NORTH:
			y++;
			break;
		case SOUTH:
			y--;
			break;
		default:
			break;
	}
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	return (0);
}
