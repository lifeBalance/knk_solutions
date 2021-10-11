# Chapter 16: Exercises

## Exercise 1
In the following declarations, the `x` and `y` structures have members named `x` and `y`:
```c
struct { int x, y;} x;
struct { int x, y;} y;
```

Are these declarations legal on an individual basis? Could both declarations appear as shown in a program? Justify your answer.

**Answer**: Yes, they're legal because both structures act like namespaces for the members they contain. So for example ``x.x`` and ``x.y`` are different than ``y.x`` and ``y.y``.