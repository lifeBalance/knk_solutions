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
