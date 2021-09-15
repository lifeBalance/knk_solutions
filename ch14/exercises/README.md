# Chapter 4: Exercises

## Exercise 1
Write parameterized macros that compute the following values.

(a) The cube of `x`.

(b) The remainder when `n` is divided by 4.

(c) 1 if the product of `x` and `y` is less than 100, 0 otherwise.

Do your macros always work? If not, describe what arguments would make them
fail.

**Answer**: See `ex01.c`

(a) This macro produces a wrong result if the argument is **not an integer**, for example, a floating-point number.

(b) The compiler gives me an error if I try to use this macro with a floating-point number; the macro doesn't fail.

(c) Couldn't think of a value to make this fail.

## Exercise 2
Write a macro `NELEMS(a)` that computes the number of elements in a one-dimensional array `a`. *Hint:* See the discussion of the `sizeof` operator in Section 8.1.

**Answer**: See `ex02.c`

## Exercise 3
Let `DOUBLE` be the following macro:
```c
#define DOUBLE(x) 2*x
```

(a) What is the value of `DOUBLE(1+2)`?
(b) What is the value of `4/DOUBLE(2)`?
(c) Fix the definition of `DOUBLE`.


**Answer**:

(a) It's `4`, because the macro is replaced by `2 * 1 + 2`, which following operator precedence, multiplication comes first, so `2 + 2` equals `4`.

(b) It's `4` again, because the macro is replaced as `4 / 2 * 2`, which following operator precedence, division comes first, so `2 * 2` equals `4`.

(c)  If we add parentheses around the argument, and also around the whole expression, the macro works as intended. See `ex03.c` for a corrected version.

## Exercise 4
For each of the following macros, give an example that illustrates a problem with the macro and show how to fix it.

(a) `#define AVG(x,y) (x+y)/2`
(b) `#define AREA(x,y) (x)*(y)`

**Answer**: See `ex04.c` for a corrected version.

(a) If we invoke the macro as `30 / AVG(4, 2)` it gets replaced `30 / (4 + 2) / 2`, so the divisions get evaluated from **left to right**: `30 / 6` is `5` and that times `2` is `2.5` which is truncated to `2`. If we add parentheses around the whole expression, the macro expands to the average, `3`, and we get the right result(`10`).

(b) If we try to invoke `90 / AREA(3, 3)`, it would expand to `90 / 3 * 3`; division comes first, and the whole expression evaluates to `90` instead of `10`.

## Exercise 5
Let `TOUPPER` be the following macro:
```c
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z'?(c) - 'a' + 'A' : (c))
```

Let `s` be a string and let `i` be an `int` variable. Show the output produced by each of the following program fragments.

(a)
```c
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));
```

(b)
```c
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));
```

(a) `D`, because we're passing an argument that is incremented each time it's replaced:
```c
'a' <= (i++) && (i++) <= 'z'? (i++) - 'a' + 'A' : (i++)
```
So it's value will be incremented **four times**: 

* Once before the macro is called.

* Twice in the condition of the ternary operator (both subexpressions are evaluated)

* Once more when the `true` clause runs.

(b) `2`, what we said above applies here, only that here, the argument is incremented **thrice**:

* Once before the macro invocation.

* Once in the condition of the ternary operator (short-circuit logic, only the first part of the condition is evaluated).

* Again when the `false` clause runs.

Bottom line, in function-like macros don't pass arguments with side effects.

**Answer**: See `ex05.c` to see it in action.

## Exercise 6
(a) Write a macro `DISP(f,x)` that expands into a call of `printf` that displays the value of the function `f` when called with argument `x`. For example,
```c
DISP(sqrt, 3.0);
```

should expand into
```c
printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
```

(b) Write a macro `DISP2(f,x,y)` that's similar to DISP but works for functions with two arguments.

**Answer**: See `ex06.c` to see it in action.

## Exercise 7
Let `GENERIC_MAX` be the following macro:
```c
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
```

(a) Show the preprocessor's expansion of `GENERIC_MAX(long)`.

(b) Explain why `GENERIC_MAX` doesn't work for basic types such as `unsigned long`.

(c) Describe a technique that would allow us to use `GENERIC_MAX` with basic types such as `unsigned long`. *Hint:* Don't change the definition of `GENERIC_MAX`.

**Answer**: See `ex07.c` to see it in action.

(a) `GENERIC_MAX(long)` expands to:
```c
long long_max(long x, long y) {
  return x > y ? x : y;
}
```

(b) `GENERIC_MAX(unsigned long)` expands to:
```c
unsigned long unsigned long_max(unsigned long x, unsigned long y) {
  return x > y ? x : y;
}
```
It doesn't work because of the **space** in the type name `unsigned long`.

(c) The solution would be to create another macro before `GENERIC_MAX`:
```C
#define unsigned_long unsigned long
```

That would produce a correct expansion:
```c
unsigned long unsigned_long_max(unsigned long x, unsigned long y)
{
  return x > y ? x : y;
}
```

## Exercise 8
Suppose we want a macro that expands into a string containing the current line number and file name. In other words, we'd like to write
```c
const char *str = LINE_FILE;
```

and have it expand into
```c
const char *str = "Line 10 of file foo.c";
```

where `foo.c` is the file containing the program and 10 is the line on which the invocation of `LINE_FILE` appears. *Warning:* This exercise is for experts only. Be sure to read the Q&A section carefully before attempting!

**Answer**: See `ex08.c` to see it in action. If we tried to stringize `__LINE__` directly (using `#`) we'd get `"__LINE__"`, and not its numeric value.

## Exercise 9
Write the following parameterized macros.

(a) `CHECK(x,y,n)` - Has the value 1 if both `x` and `y` fall between 0 and `n` - 1, inclusive.

(b) `MEDIAN(x,y,z)` - Finds the median of `x`, `y` and `z`.

(c) `POLYNOMIAL(x)` - Computes the polynomial 3x<sup>5</sup> + 2x<sup>4</sup> - 5x<sup>3</sup> - x<sup>2</sup> + 7x - 6.

## Exercise 10
Functions can often --but not always-- be written as parameterized macros. Discuss what characteristics of a function would make it unsuitable as a macro.

**Answer**: Several characteristics of macros make them a bad choice for using them as a replacement for functions:

* Macro arguments are not type checked.
* It's not possible to create pointers to function-like macros.
* A macro may evaluate its arguments more than once so if we want to pass arguments with side effects, that's a problem.

## Exercise 11
(C99) C programmers often use the `fprintf` function to write error messages:
```c
fprintf(stderr, "Range error: index = %d\n", index);
```

`stderr` is C's "standard error" stream; the remaining arguments are the same as those for `printf`, starting with the format string. Write a macro named `ERROR` that generates the call of `fprintf` shown aboven when given a format string and the items to be displayed:

```c
ERROR("Range error: index = %d\n", index);
```

**Answer**: See `ex10.c`.

## Exercise 12
Suppose that the macro `M` has been defined as follows:

```c
#define M 10
```

Which of the following tests will fail?

(a) `#if M`

(b) `#ifdef M`

(c) `#ifndef M`

(d) `#if defined(M)`

(e) `#if !defined(M)`

**Answer**: See `ex12.c` to see it in action.

(a) Will succeed because `M` is not `0`.

(b) Will succeed because `M` is defined.

(c) Will **fail** because `M` is defined.

(d) Will succeed because `M` is defined.

(e) Will **fail** because `M` is defined.

## Exercise 13
(a) Show what the following program will look like after preprocessing. you may ignore any lines added to the program as a result of including the `<stdio.h>` header.
```c
#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}
```

(b) What will be the output of this program?

**Answer**: See `ex13.c` to see it in action.

(a) If we run the compiler with the `-E` option, we get the preprocessor's output on our terminal; this is the result (with a bit of formatting):

```c
void f(void);

int main(void)
{
  f();
  return 0;
}

void f(void)
{
  printf("N is undefined\n");
}
```

(b) The output is:
```
N is undefined
```

That's because the preprocessor runs before the compiler, and even though the macro `N` is defined before the call to `f()`, right after it's **undefined** by the ``#undef`` directive (so the macro `N` is removed from the code that the compiler receives). Bottom line: `N` is undefined, so the `printf` under the `#else` directive is the one called.
