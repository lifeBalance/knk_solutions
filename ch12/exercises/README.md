# Chapter 12: Exercises

## Exercise 1
Suppose that the following declarations are in effect:
```c
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];
```

(a) What is the value of `*(p+3)`?
(b) What is the value of `*(q-3)`?
(c) What is the value of `q - p`?
(d) Is the condition `p < q` true or false?
(e) Is the condition `*p < *q` true or false?

**Answer**: Check `ex01.c`

(a) `*(p+3)`: 14
(b) `*(q-3)`: 34
(c) `q - p`: 4 (the space of 4 integers)
(d) `p < q` is `1` (true)
(e) `*p < *q` is `0` (false)

## Exercise 2
Suppose that `high`, `low` and `middle` are all pointer variables of the same type, and that `low` and `high` point to elements of an array. Why is the following statement illegal, and how could it be fixed?
```c
middle = (low + high) / 2;
```

**Answer**: Two pointer can not be added, only subtracted; subtracting we'd get a value such as 2 or 4 or whatever, to which we have to add the address of low element to turn `middle` into a valid address. Check `ex02.c` to see it in action.

## Exercise 3
What will be the contents of the `a` array after the following statements are executed?
```c
#define N 10

int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
}
```

**Answer**: It reverses the elements in the array using two pointers. Check `ex03.c` to see it in action.

## Exercise 4
Rewrite the `make_empty`, `is_empty` and `is_full` functions of Section 10.2 to use the pointer variable `top_ptr` instead of the integer variable `top`.

**Answer**: Check `ex04.c` to see it in action (See **pages 262 and 263** to see how `push` and `pop` must be implemented).
