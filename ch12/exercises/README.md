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

## Exercise 5
Suppose that `a` is a one-dimensional array and `p` is a pointer variable. Assuming that the assignment `p = a` has just been performed, which of the following expressions are illegal because of mismatched types? Of the remaining expressions, which are true (have a nonzero value)?

(a) `p == a[0]`

(b) `p == &a[0]`

(c) `*p == a[0]`

(d) `p[0] == a[0]`

**Answer**: Check `ex05.c` to see it in action.

(a) `p == a[0]`: Illegal since `p` is an address and `a[0]` an element.

(b) `p == &a[0]`: Legal and true, they're both the same address.

(c) `*p == a[0]`: Legal and true, both are dereferencing the first element.

(d) `p[0] == a[0]`: Legal and true, array subscripting can be used with pointers too.

## Exercise 6
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, elimate the variable `i` and all uses of the `[]` operator.) Make as few changes as possible.
```c
int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
```

**Answer**: Check `ex06.c` to see it in action.

## Exercise 7
Write the following function:
```c
bool search(const int a[], int n, int key);
```

`a` is an array to be searched, `n` is the number of elements in the array, and `key` is the search key. `search` should return `true` if `key` matches some element of `a`, and `false` if it doesn't. Use pointer arithmetic -- not subscripting -- to visit array elements.

**Answer**: Check `ex07.c` to see it in action.

## Exercise 8
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate the variable `i` and all uses of the `[]` operator.) Make as few changes as possible.
```c
void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}
```

**Answer**: Check `ex08.c` to see it in action.
