# Chapter 11: Exercises

## Exercise 1
If `i` is a variable and `p` points to `i`, which of the following expressions
are aliases for `i`?

(a) `*p`

(b) `&p`

(c) `*&p`

(d) `&*p`

(e) `*i`

(f) `&i`

(g) `*&i`

(h) `&*i`

**Answer**: Two options:

(a) `*p`: we're using the **indirection operator** to access the **value of the reference** pointed by `p`.
(g) `*&i`: this is quite strange syntax for demonstration purposes, but it's extracting the address of `i`, so it becomes sort of a pointer on the fly, then apply the **indirection operator** to access the value.

