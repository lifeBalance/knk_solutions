# Chapter 16: Exercises

## Exercise 1
In the following declarations, the `x` and `y` structures have members named `x` and `y`:
```c
struct { int x, y;} x;
struct { int x, y;} y;
```

Are these declarations legal on an individual basis? Could both declarations appear as shown in a program? Justify your answer.

**Answer**: Yes, they're legal because both structures act like namespaces for the members they contain. So for example ``x.x`` and ``x.y`` are different than ``y.x`` and ``y.y``.

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

**Answer**: Check ``ex03.c``.
