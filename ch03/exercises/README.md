# Chapter 3: Exercises

## Exercise 1
What output do the following calls of printf produce?

(a) `printf("%6d,%4d", 86, 1040);`

(b) `printf("%12.5e", 30.253);`

(c) `printf("%.4f", 83.162);`

(d) `printf("%-6.2g", .0000009979);`

**Answer**: In order to see the spaces printed when using a **minimum width** in the conversion specification, I separated them using the pipe character (`|`); check `ex01.c` to see it in action. This is the resulting output:

```
|    86|1040|
| 3.02530e+01|
|83.1620|
|1e-06 |
```

## Exercise 2
Write calls of printf that display a float variable x in the following formats.

(a) Exponential notation; left-justified in a field of size 8: one digit after the decimal point.

(b) Exponential notation: right-justified in a field of size 10; six digits after the decimal point.

(c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.

(d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.

**Answer**: Check `ex02.c`. This is the output for the number `3.14`:

```
|3.1e+00 |
|3.140000e+00|
|3.140   |
|     3|
```

## Exercise 3
For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.

(a) "%d"       versus " %d"

(b) "%d-%d-%d" versus "%d -%d -%d"

(c) "%f"       versus "%f "

(d) "%f,%f"    versus "%f, %f"

**Answer**: Check `ex03.c`.

(a) Both ways are equivalent, since the space before any conversion specifier is always skipped.
(b) Also equivalent, because each each whitespace character used in the format string matches **zero** or more whitespace characters on the input, so there's no difference if the user enters or not space before the dash.
(c) In this case the trailing space after the conversion specifier will require the user to input a non-whitespace character after the floating point number, to stop scanf from matching whitespace (a newline character is also whitespace).
(d) No difference either.

**Answer**: Check `ex03.c` to see it live.

## Exercise 4
Suppose that we call scanf as follows:
```
scanf("%d%f%d", &i, &x, &j);
```

If the user enters
```
10.3 5 6
```
what will be the values of `i`, `x` and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)

**Answer**: 
* `scanf` stores `10` in `i` (it stops reading at the decimal point, which is put back).
* `x` will be `0.3`, stopping at the space after the `3`, which is put back.
* `j`, will store `5` (ignores the space before and after the `5`). 

**Answer**: Check `ex04.c` to see it live.

## Exercise 5
Suppose that we call `scanf` as follows:
```
scanf("%f%d%f", &x, &i, &y);
```

If the user enters
```
12.3 45.6 789
```
what will be the values of `x`, `i` and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)

**Answer**:
* `x` will be `12.3`.
* `i` will be `45` (the point will be left).
* `y` will be `0.6`; since there's a space after, the value `789` will be discarded, and left in the input buffer.

**Answer**: Check `ex05.c` to see it in action.

## Exercise 6
Show how to modify the `addfrac.c` program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each `/` character.

**Answer**: Check `ex06.c`.
