/*
** Exercise #10
*/

#include <stdio.h>
#include <stdbool.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point upper_left;
	struct point lower_right;
};

int					get_area(struct rectangle r);
struct point		get_center(struct rectangle r);
struct rectangle	translate_rect(struct rectangle r, int x, int y);
bool				is_point_within(struct rectangle r, struct point p);

int					main(void)
{
	struct rectangle r = {{0, 2}, {2, 0}};
	struct rectangle r_t;
	struct point p1 = {1, 1};
	struct point p2 = {10, 1};

	printf("Area: %d\n", get_area(r));
	printf("Center: %d, %d\n", get_center(r).x, get_center(r).y);
	r_t = translate_rect(r, 1, 1);
	printf("Translated: upper left(%d, %d), lower_right(%d, %d)\n", r_t.upper_left.x, r_t.upper_left.y, r_t.lower_right.x, r_t.lower_right.y);
	printf("Point %d, %d inside r? %s\n", p1.x, p1.y, is_point_within(r, p1) ? "yep" : "nope");
	printf("Point %d, %d inside r? %s\n", p2.x, p2.y, is_point_within(r, p2) ? "yep" : "nope");

	return (0);
}

int					get_area(struct rectangle r)
{
	return ((r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y));
}

struct point		get_center(struct rectangle r)
{
	return (struct point) {
		(r.lower_right.x - r.upper_left.x) / 2,
		(r.upper_left.y - r.lower_right.y) / 2
	};
}

struct rectangle	translate_rect(struct rectangle r, int x, int y)
{
	return (struct rectangle) {
		{r.upper_left.x + x, r.upper_left.y + y},
		{r.lower_right.x + x, r.lower_right.y + y}
	};
}

bool				is_point_within(struct rectangle r, struct point p)
{
	if (p.x >= r.upper_left.x &&
		p.x <= r.lower_right.x &&
		p.y <= r.upper_left.y &&
		p.y >= r.lower_right.y)
		return (true);
	return (false);
}
