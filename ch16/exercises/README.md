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

## Exercise 10
The following structures are designed to store information about objects on a graphics screen:
```c
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
```

A `point` structure stores the *x* and *y* coordinates of a point on the screen. A `rectangle` structure stores the coordinates of the upper left and lower right corners of a rectangle. Write functions that perform the following operations on a `rectangle` structure `r` passed as an argument:

(a) Compute the area of `r`.

(b) Compute the center of `r`, returning it as a `point` value. If either the *x* or *y* coordinate of the center isn't an integer, store its truncated value in the `point` structure.

(c) Move `r` by `x` units in the *x* direction and `y` units in the *y* direction, returning the modified version of `r` (`x` and `y` are additional arguments to the function).

(d) Determine whether a point `p` lies within `r`, returning `true` or `false` (`p` is an additional argument of type `struct point`).

**Answer**:  Check `ex10.c`.

## Exercise 11
Suppose that `s` is the following structure:
```c
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double` values occupy eight bytes, how much space will a C compiler allocate for `s`? (Assume that the compiler leaves no "holes" between members.)

**Answer**:  It will allocate 8 + 8 + 4 = **20 bytes**:

* a = 8 bytes
* c = 8 bytes (the largest member in the union)
* f = 4 bytes (it's an array of 4 char)

## Exercise 12
Suppose that `u` is the following union:
```c
union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double` values occupy eight bytes, how much space will a C compiler allocate for `u`? (Assume that the compiler leaves no "holes" between members.)

**Answer**:  It will allocate 4 + 8 + 4 = **16 bytes**:

* b = 4 bytes (it's an array of 4 char)
* c = 8 bytes
* d = 4 bytes

Since `u` is a **union**, the compiler allocates space for the biggest member, which is the structure `e`; space is allocated for all the member of the structure.

## Exercise 13
Suppose that `s` is the following structure (`point` is a structure tag declared in Exercise 10):
```c
struct shape {
    int shape_kind;            /* RECTANGLE or CIRCLE */
    struct point center;       /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;
```

If the value of `shape_kind` is `RECTANGLE`, the `height` and `width` members store the dimensions of a rectangle. If the value of `shape_kind` is `CIRCLE`, the `radium` member stores the radius of a circle. Indicate which of the following statements are legal, and show how to repair the ones that aren't:

(a) `s.shape_kind = RECTANGLE;`

(b) `s.center.x = 10;`

(c) `s.height = 25;`

(d) `s.u.rectangle.width = 8;`

(e) `s.u.circle = 5;`

(f) `s.u.radius = 5;`

**Answer**: Check `ex13.c` to see the corrections.

(a) Legal.

(b) Legal.

(c) Illegal; the `height` member is not accessible from `s`, and before assigning to it, `shape_kind` must be checked.

(d) Legal; before assigning to it, `shape_kind` must be checked.

(e) Illegal.

(f) Illegal.

(e and f) They can be fixed using `s.u.circle.radius`; before assigning to it, `shape_kind` must be checked.

## Exercise 14
Let `shape` be the structure tag declared in Exercise 13. Write functions that perform the following operations on a `shape` structure `s` passed as an argument:

(a) Compute the area of `s`.

(b) Move `s` by `x` units in the *x* direction and `y` units in the *y* direction, returning the modified version of `s` (`x` and `y` are additional
arguments to the function).

(c) Scale `s` by a factor of `c` (a `double` value), returning the modified version of `s` (`c` is an additional argument to the function).

**Answer**: Check `ex14.c` to see it in action.

## Exercise 15
(a) Declare a tag for an enumeration whose values represent the seven days of the week.

(b) Use `typedef` to define a name for the enumeration of part (a).

**Answer**: Check `ex15.c` to see it in action.

(a) `enum day {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};`

(b) `typedef enum {MON = 1, TUE, WED, THU, FRI, SAT, SUN} Day;`

## Exercise 16
Which of the following statements about enumeration constants are true?

(a) An enumeration constant may represent any integer specified by the programmer.

(b) Enumeration constants have exactly the same properties as constants created using `#define`.

(c) Enumeration constants have the values 0, 1, 2, ... by default.

(d) All constants in an enumeration must have different values.

(e) Enumeration constants may be used as integers in expressions.

**Answer**:

(a) True: at declaration, the programmer can assign any integer value to the enumeration constants. Later on, an enumeration variable can take any of the enumerated values (but not other ones).
``` C
enum num {A=10, B=20};
enum num a = A;
printf("%d\n", a);          /* 10 */
```

(b) False: Enumeration constants are subject to scope rules, whereas macros have file visibility.

(c) True. By default, enumerations start at ``0``, but that can be changed by the programmer.

(d) False. Enumeration constant **names** must be different, but the values are arbitrary, for example:
``` C
enum num {A, B=0};
```

Both constants `A` and `B` represent the same value, `0`.

(e) True. For example:
``` C
enum num {DOUBLE=2, TRIPLE=3};
printf("%d\n", 3 * DOUBLE);           /* 6 */
printf("%d\n", 2 * TRIPLE);           /* 6 */
```
