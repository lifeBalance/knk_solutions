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

## Exercise 11
Write the following function:

```c
float compute_GPA(char grades[], int n);
```

The `grades` array will contain letter grades (`A`, `B`, `C`, `D` or `F`, either upper-case or lower-case); `n` is the length of the array. The function should return the average of the grades (assume that `A` = 4, `B` = 3, `C` = 2, `D` = 1 and `F` = 0).

**Answer**: Check `ex11.c`

## Exercise 12
Write the following function:
```c
double inner_product(double a[], double b[], int n);
```

The function should return `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`.

**Answer**: Check `ex12.c`

## Exercise 13
Write the following function, which evaluates a chess position:

```c
int evaluate_position(char board[8][8]);
```

`board` represents a configuration of pieces on a chessboard, where the letters `K`, `Q`, `R`, `B`, `N` and `P` represent White pieces, and the letters `k`, `q`, `r`, `b`, `n` and `p` represent Black pieces. `evaluate_position` should sum the values of the White pieces (`Q` = 9, `R` = 5, `B` = 3, `N` = 3, `P` = 1). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has an advantage in material and negative if Black has an advantage.

**Answer**: Check `ex13.c`

## Exercise 14
The following function is supposed to return `true` if any element of the array `a` has the value `0` and `false` if all elements are nonzero. Sadly, it contains an error. Find the error and show how to fix it:
```c
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}
```

**Answer**: The error is that as soon as one of the elements is **non-zero**, it returns `false`, whithout having checked **all** of the elements. Check `ex14.c` to see the fix.

## Exercise 15
The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one `return` statement.
```c
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

**Answer**: Check `ex15.c` to see the refactored version.

## Exercise 16
Condense the `fact` function in the same way we condensed `power`.

**Answer**: Check `ex16.c` to see the refactored version.

## Exercise 17
Rewrite the `fact` function so that it's no longer recursive.

**Answer**: Check `ex17.c` to see the refactored version.

## Exercise 18
Write a recursive version of the `gcd` function (see Exercise 3). Here's the strategy to use for computing `gcd(m, n)`: If `n` is 0, return `m`. Otherwise, call `gcd` recursively, passing `n` as the first argument and `m % n` as the second.

**Answer**: Check `ex18.c` to see the refactored version.

## Exercise 19
Consider the following "mystery" function:
```c
void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```

Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?

**Answer**: When, for example, we call `pb(8)` the following happens:

1. `pb(8)` is pushed onto the stack; `8 != 0` so call `pb(4)`.
2. `pb(4)` is pushed onto the stack; `4 != 0` so call `pb(2)`.
3. `pb(2)` is pushed onto the stack; `2 != 0` so call `pb(0)`.
4. `pb(8)` is pushed onto the stack; `0 != 0` becomes false, so we start popping the stack.
5. Pops: prints `1`.
6. Pops: prints `0`.
7. Pops: prints `0`.
8. Pops: prints `0`.

So basically it prints any number in binary (base 2). Check `ex19.c` to see it in action.
