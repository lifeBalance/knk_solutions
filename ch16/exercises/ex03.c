/*
** Exercise #3
*/

#include <stdio.h>
struct complex {
	double real;
	double imaginary;
};

struct complex make_complex(double a, double b);
struct complex add_complex(struct complex a, struct complex b);

int main(void)
{
	struct complex c1, c2, c3;

	c1 = make_complex(1.2, 3.4);
	printf("Real: %.2f, Imaginary: %.2f\n", c1.real, c1.imaginary);

	c2 = make_complex(0.8, 1.6);
	printf("Real: %.2f, Imaginary: %.2f\n", c2.real, c2.imaginary);

	c3 = add_complex(c1, c2);
	printf("Real: %.2f, Imaginary: %.2f\n", c3.real, c3.imaginary);
	return (0);
}

struct complex make_complex(double a, double b)
{
	struct complex ret_val = {.real = a, .imaginary = b};
	return (ret_val);
}

struct complex add_complex(struct complex a, struct complex b)
{
	struct complex ret_val;

	ret_val.real = a.real + b.real;
	ret_val.imaginary = a.imaginary + b.imaginary;
	return (ret_val);
}
