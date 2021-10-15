/*
** Exercise #14
*/

#include <stdio.h>
#include <math.h>

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
};

int					get_area(struct shape s);
struct shape		move_it(struct shape s, int x, int y);
struct shape		scale_it(struct shape s, long c);

int					main(void)
{
	struct shape s = {
		CIRCLE,
		{0, 0},
		{{1}},
	};

	printf("(truncated) Area of circle with radius %d: %d\n",
	s.u.circle.radius ,get_area(s));

	s.shape_kind = RECTANGLE;
	s.u.rectangle.height = 2;
	s.u.rectangle.width = 2;
	printf("Area of %d x %d rectangle: %d\n", s.u.rectangle.height,
											s.u.rectangle.width,
											get_area(s));
	s = move_it(s, 1, 1);
	printf("New center: (%d, %d)\n", s.center.x, s.center.y);
	s = scale_it(s, 2);
	printf("Scaled area of %d x %d rectangle: %d\n", s.u.rectangle.height,
											s.u.rectangle.width,
											get_area(s));
	s.shape_kind = CIRCLE;
	s.u.circle.radius = 1;
	printf("(truncated) Area of circle with radius %d: %d\n",
	s.u.circle.radius ,get_area(s));
	s = scale_it(s, 2);
	printf("(truncated) Scaled area of circle with radius %d: %d\n",
	s.u.circle.radius ,get_area(s));
	return (0);
}

int					get_area(struct shape s)
{
	if (s.shape_kind == RECTANGLE)
		return (s.u.rectangle.height * s.u.rectangle.width);
	else if (s.shape_kind == CIRCLE)
		return (s.u.circle.radius * s.u.circle.radius * acos(-1));
}

struct shape		move_it(struct shape s, int x, int y)
{
	s.center.x += x;
	s.center.y += y;
	return (s);
}

struct shape		scale_it(struct shape s, long c)
{
	if (s.shape_kind == RECTANGLE)
	{
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	}
	else if (s.shape_kind == CIRCLE)
		s.u.circle.radius *= c;
	return (s);
}
