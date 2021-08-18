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
