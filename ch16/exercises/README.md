# Chapter 16: Exercises

## Exercise 1
In the following declarations, the `x` and `y` structures have members named `x` and `y`:
```c
struct { int x, y;} x;
struct { int x, y;} y;
```

Are these declarations legal on an individual basis? Could both declarations appear as shown in a program? Justify your answer.

**Answer**: Yes, they're legal because both structures act like namespaces for the members they contain. So for example `x.x` and `x.y` are different than `y.x` and `y.y`.

## Exercise 2
(a) Declare structure variables named `c1`, `c2` and `c3`, each having members `real` and `imaginary` of type `double`.

(b) Modify the declaration in part (a) so that `c1`'s members initially have the values 0.0 and 1.0, while `c2`'s members are 1.0 and 0.0 initially (`c3` is not initialized).

(c) Write statements that copy the members of `c2` into `c1`. Can this be done in one statement, or does it require two?

(d) Write statements that add the corresponding members of `c1` and `c2`, storing the result in `c3`.

**Answer**:

(a)
```c
struct {
    double real;
    double imaginary;
} c1, c2, c3;
```

(b)
```c
struct {
    double real;
    double imaginary;
} c1 = {0.0, 1.0},
  c2 = {1.0, 0.0},
  c3;
```

(c)
```c
c1 = c2;
```

(d)
```c
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
```

## Exercise 3
(a) Show how to declare a tag named `complex` for a structure with two members, `real` and `imaginary`, of type `double`.

(b) Use the `complex` tag to declare variables named `c1`, `c2` and `c3`.

(c) Write a function named `make_complex` that stores its two arguments (both of type `double`) in a `complex` structure, then returns the structure.

(d) Write a function named `add_complex` that adds the corresponding members of its arguments (both `complex` structures), then returns the result (another `complex` structure).

**Answer**: Check `ex03.c`.

## Exercise 4
Repeat Exercise 3, but this time using a *type* named `Complex`.

**Answer**: Check `ex04.c`.

## Exercise 5
Write the following functions, assuming that the `date` structure contains three members: `month`, `day` and `year` (all of type `int`).

(a) `int day_of_year(struct date d);`

Returns the day of the year (an integer between 1 and 366) that corresponds to the date `d`.

(b) `int compare_dates(struct date d1, struct date d2);`

Returns -1 if `d1` is an earlier date than `d2`, +1 if `d1` is a later date than `d2`, and 0 if `d1` and `d2` are the same.

**Answer**: Check `ex05.c`.

## Exercise 6
Write the following function, assuming that the `time` structure contains three members: `hours`, `minutes` and `seconds` (all of type `int`).

```c
struct time split_time(long total_seconds);
```

`total_seconds` is a time represented as the number of seconds since midnight. The function returns a structure containing the equivalent time in hours (0-23), minutes (0-59) and seconds (0-59).

**Answer**: Check `ex06.c`.

## Exercise 7
Assume that the `fraction` structure contains two members: `numerator` and `denominator` (both of type `int`). Write functions that perform the following operations on fractions:

(a) Reduce the fraction `f` to lowest terms. *Hint:* To reduce a fraction to lowest terms, first compute the greates common divison (GCD) of the numerator and denominator. Then divide both the numerator and denominator by the GCD.

(b) Add the fractions `f1` and `f2`.

(c) Subtract the fraction `f2` from the fraction `f1`.

(d) Multiply the fractions `f1` and `f2`.

(e) Divide the fraction `f1` by the fraction `f2`.

The fractions `f`, `f1` and `f2` will be arguments of type `struct fraction`: each function will return a value of type `struct fraction`. The fractions returned by the functions in parts (b)-(e) should be reduced to lowest terms. *Hint:* You may use the function from part (a) to help write the functions in parts (b)-(e).

**Answer**: Check `ex07.c`.

## Exercise 8
Let `color` be the following structure:
```c
struct color {
    int red;
    int green;
    int blue;
};
```

(a) Write a declaration for a `const` variable named `MAGENTA` of type `struct color` whose members have the values 255, 0 and 255, respectively.

(b) (C99) Repeat part (a), but use a designated initializer that doesn't specify the value of `green`, allowing it to defaul to 0.

**Answer**: Check `ex08.c`.

## Exercise 9
Write the following functions. (The `color` structure is defined in Exercise 8.)

(a) `struct color make_color(int red, int green, int blue);` Returns a `color` structure containing the specified red, green and blue values. If any argument is less than zero, the corresponding member of the structure will contain zero instead. If any argument is greater than 255, the corresponding member of the structure will contain 255.

(b) `int getRed(struct color c);` Returns the value of `c`'s `red` member.

(c) `bool equal_color(struct color color1, struct color color2);` Returns `true` if the corresponding members of `color1` and `color2` are equal.

(d) `struct color brighter(struct color c);`  
Returns a `color` structure that represents a brighter version of the color `c`. The structure is identical to `c`, except that each member has been divided by 0.7 (with the result truncated to an integer). However, there are three special cases: (1) If all members of `c` are zero, the function returns a color whose members all have the value 3. (2) If any member of `c` is greater than 0 but less than 3, it is repaced by 3 before the division by 0.7. (3) If dividing by 0.7 causes a member to exceed 255, it is reduced to 255.

(e) `struct color darker(struct color c);` Returns a `color` structure that represents a darker version of the color `c`. The structure is identical to `c`, except that each member has been multiplies by 0.7 (with the result truncated to an integer).

**Answer**: Check `ex09.c`.
