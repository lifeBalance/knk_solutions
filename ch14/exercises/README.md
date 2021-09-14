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
