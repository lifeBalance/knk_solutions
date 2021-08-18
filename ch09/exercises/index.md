# Chapter 9: Exercises

## Exercise 1
The following function, which computes the area of a triangle, contains two
errors. Locate the errors and show how to fix them. (*Hint*: There are no errors
in the formula.)
```c
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

**Answer**: Check `ex01.c` for the right version. 

The errors are:

1. The type of the ``height`` parameter is not specified.
2. ``product`` seems to be a local variable and should be placed inside the body of the function.

## Exercise 2
Write a function `check(x, y, n)` that returns `1` if both `x` and `y` fall between `0` and `n - 1`, inclusive. The function should return `0` otherwise. Assume that `x`, `y` and `n` are all of type `int`.

**Answer**: Check `ex02.c`. 

## Exercise 3
Write a function `gcd(m, n)` that calculates the greatest common divisor of the integers `m` and `n`. (Programming Project 2 in Chapter 6 describes Euclid's algorithm for computing the GCD.)

**Answer**: Check `ex03.c`.

## Exercise 4
Write a function `day_of_year(month, day, year)` that returns the day of the year (an integer between 1 and 366) specified by the three arguments.

**Answer**: Check `ex04.c`.

## Exercise 5
Write a function `num_digits(n)` that returns the number of digits in `n` (a positive integer). *Hint*: To determine the number of digits in a number *n*, divide it by 10 repeatedly. When *n* reaches 0, the number of divisions indicates how many digits *n* originally had.

**Answer**: Check `ex05.c`.

## Exercise 6
Write a function `digit(n, k)` that returns the `k`<sup>th</sup> digit (from the right) in `n` (a positive integer). For example `digit(829, 1)` returns 9, `digit(829, 2)` returns 2 and `digit(829, 3)` returns 8. if `k` is greater than the number of digits in `n`, have the function return 0.

**Answer**: Check `ex06.c`.

## Exercise 7
Suppose that the function `f` has the following definition:

`int f(int a, int b) { ... }`

Which of the following statements are legal? Assume that `i` has type `int` and
`x` has type `double`.

(a) `i = f(83, 12);`
(b) `x = f(83, 12);`
(c) `i = f(3.15, 9.28);`
(d) `x = f(3.15, 9.28);`
(e) `f(83, 12);`

**Answer**: All the statements are legal:
(a) The type of the arguments and the type of the return values match.
(b) The return value will be cast to `double` in order to be assign to `x`.
(c) The arguments are converted to integers before being assigned to the function parameters; so `3.15` and `9.28` are truncated to `3` and `9` respectively.
(d) Same as above plus, he return value will be cast to `double` in order to be assign to `x`.
(e) The return value is not assigned, so it gets discarded.

## Exercise 8
Which of the following would be valid prototypes for a function that returns nothing and has one `double` parameter?

(a) `void f(double x);`
(b) `void f(double);`
(c) `void f(x);`
(d) `f(double x);`

**Answer**:
(a) Valid.
(b) Valid; we're just omitting the parameter name.
(c) Invalid; we have to indicate the type of the parameter.
(d) Invalid in C99; valid in C89, but the return type defaults to `int`.

## Exercise 9
What will be the output of the following program?

```c
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

**Answer**: Since arguments in C are passed by value, `swap` receives the values of `i` and `j`; trying to swap their values in the `swap` function is futile. So the output is:
```
i = 1, j = 2
```

Check `ex09.c` to see it in action.

## Exercise 10
Write functions that return the following values. (Assume that `a` and `n` are
parameters, where `a` is an array of `int` values and `n` is the length of the
array.)

(a) The largest element in `a`.
(b) The average of all elements in `a`.
(c) The number of positive elements in `a`.

**Answer**: Check `ex10.c`