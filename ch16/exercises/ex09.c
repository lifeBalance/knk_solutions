/*
** Exercise #9
*/

#include <stdio.h>
#include <stdbool.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color	make_color(int red, int green, int blue);
int				getRed(struct color c);
bool			equal_color(struct color color1, struct color );
struct color	brighter(struct color c);
struct color	darker(struct color c);

int				main(void)
{
	struct color cyan; /* 0, 255, 255 */
	struct color aqua; /* 0, 255, 255 */
	struct color c;

	cyan = make_color(-1, 255, 256);
	aqua = make_color(0, 255, 255);
	c = make_color(255, 255, 255);
	
	printf("Cyan: (%d, %d, %d)\n",	cyan.red,
									cyan.green,
									cyan.blue);
	printf("Cyan's red: %d\n", getRed(cyan));
	printf("Is cyan identical to aqua? %s\n", equal_color(cyan, aqua) ? "yep" : "nope");
	c = brighter(c);
	printf("Brighter: (%d, %d, %d)\n",	c.red,
										c.green,
										c.blue);
	c = darker(c);
	printf("Darker: (%d, %d, %d)\n",	c.red,
										c.green,
										c.blue);
	return (0);
}

struct color	make_color(int red, int green, int blue)
{
	red = (red < 0) ? 0 : red;
	green = (green < 0) ? 0 : green;
	blue = (blue < 0) ? 0 : blue;
	red = (red > 255) ? 255 : red;
	green = (green > 255) ? 255 : green;
	blue = (blue > 255) ? 255 : blue;
	return (struct color) {red, green, blue};
}

int				getRed(struct color c)
{
	return (c.red);
}

bool			equal_color(struct color color1, struct color color2)
{
	return (color1.red == color2.red &&
			color1.green == color2.green &&
			color1.blue == color2.blue) ? 1 : 0;
}

struct color	brighter(struct color c)
{
	if (c.red == 0 && c.green == 0 && c.blue == 0)
		return (struct color) {3, 3, 3};

	if (c.red > 0 && c.red < 3)
		c.red = 3;
	if (c.green > 0 && c.green < 3)
		c.green = 3;
	if (c.blue > 0 && c.blue < 3)
		c.blue = 3;

	/* dividing by less than 1 makes number bigger */
	c.red /= 0.7;
	c.green /= 0.7;
	c.blue /= 0.7;

	c.red = (c.red > 255) ? 255 : c.red;
	c.green = (c.green > 255) ? 255 : c.green;
	c.blue = (c.blue > 255) ? 255 : c.blue;
	return (c);
}

struct color	darker(struct color c)
{
	c.red *= 0.7;
	c.green *= 0.7;
	c.blue *= 0.7;
	return (c);
}
