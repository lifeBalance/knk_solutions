/*
** Exercise #7
*/

#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

int find_gcd(int a, int b);
struct fraction	reduce(struct fraction f);
struct fraction	add(struct fraction f1, struct fraction f2);
struct fraction	subtract(struct fraction f1, struct fraction f2);
struct fraction	multiply(struct fraction f1, struct fraction f2);
struct fraction	divide(struct fraction f1, struct fraction f2);

int			main(void)
{
	struct fraction f, f1, f2;

	f.numerator = 2;
	f.denominator = 8;
	f1.numerator = 1;
	f1.denominator = 3;
	f2.numerator = 2;
	f2.denominator = 3;

	printf("%9s: %d/%d\n", "f", f.numerator, f.denominator);
	f = reduce(f);
	printf("f reduced: %d/%d\n", f.numerator, f.denominator);

	f = reduce(add(f1, f2));
	printf("%d/%d + %d/%d = %d/%d\n",	f1.numerator, f1.denominator,
										f2.numerator, f2.denominator,
										f.numerator, f.denominator);
	f = reduce(subtract(f1, f2));
	printf("%d/%d - %d/%d = %d/%d\n",	f1.numerator, f1.denominator,
										f2.numerator, f2.denominator,
										f.numerator, f.denominator);
	f = reduce(multiply(f1, f2));
	printf("%d/%d * %d/%d = %d/%d\n",	f1.numerator, f1.denominator,
										f2.numerator, f2.denominator,
										f.numerator, f.denominator);
	f = reduce(divide(f1, f2));
	printf("%d/%d / %d/%d = %d/%d\n",	f1.numerator, f1.denominator,
										f2.numerator, f2.denominator,
										f.numerator, f.denominator);
	return (0);
}

int find_gcd(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (a);
}

struct fraction	reduce(struct fraction f)
{
	int gcd;

	gcd = find_gcd(f.numerator, f.denominator);
	return ((struct fraction) {f.numerator / gcd, f.denominator / gcd});
}

struct fraction	add(struct fraction f1, struct fraction f2)
{
	f1.numerator = f1.numerator * f2.denominator;
	f2.numerator = f2.numerator * f1.denominator;
	return ((struct fraction) {
		.numerator = f1.numerator + f2.numerator,
		.denominator = f1.denominator * f2.denominator
	});
}

struct fraction	subtract(struct fraction f1, struct fraction f2)
{
	f1.numerator = f1.numerator * f2.denominator;
	f2.numerator = f2.numerator * f1.denominator;
	return ((struct fraction) {
		.numerator = f1.numerator - f2.numerator,
		.denominator = f1.denominator * f2.denominator
	});
}

struct fraction	multiply(struct fraction f1, struct fraction f2)
{
	return ((struct fraction) {
		.numerator = f1.numerator * f2.numerator,
		.denominator = f1.denominator * f2.denominator
	});
}

struct fraction	divide(struct fraction f1, struct fraction f2)
{
	return ((struct fraction) {
		.numerator = f1.numerator * f2.denominator,
		.denominator = f1.denominator * f2.numerator
	});
}
