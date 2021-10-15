/*
** Exercise #10
*/

#include <stdio.h>

#define RECTANGLE	0
#define CIRCLE		1

struct point {
	int x;
	int y;
};

struct shape {
	int shape_kind;            /* RECTANGLE or CIRCLE */
	struct point center;       /* coordinates of center */
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

int					main(void)
{
	s.shape_kind = RECTANGLE;
	printf("Shape kind: %s\n", (s.shape_kind) ? "circle" : "rectangle");
	s.center.x = 10;
	printf("Center: (%d, %d)\n", s.center.x, s.center.y);
	if (s.shape_kind == RECTANGLE)
	{
		s.u.rectangle.height = 25;
		s.u.rectangle.width = 8;
		printf("Height: %d\n", s.u.rectangle.height);
		printf("Width: %d\n", s.u.rectangle.width);
	}
	s.shape_kind = CIRCLE;
	if (s.shape_kind == CIRCLE)
	{
		s.u.circle.radius = 5;
		printf("Radius: %d\n", s.u.circle.radius);
	}
	return (0);
}
