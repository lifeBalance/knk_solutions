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

## Exercise 9
Write the following function:
```c
double inner_product(const double *a, const double *b, int n);
```

`a` and `b` both point to arrays of length `n`. The function should return `a[0] * b[0] + a[1] * b[1] +` ... `+ a[n-1] * b[n-1]`. Use pointer arithmetic --not subscripting-- to visit array elements.

**Answer**: Check `ex09.c` to see it in action.

## Exercise 10
Modify the `find_middle` function of Section 11.5 so that it uses pointer arithmetic to calculate the return value.

**Answer**: Check `ex10.c` to see it in action.

## Exercise 11
Modify the `find_largest` function so that it uses pointer arithmetic --not subscripting-- to visit array elements.

**Answer**: Check `ex11.c` to see it in action.

## Exercise 12
Write the following function:
```c
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
```

`a` points to an array of length `n`. The function searches the array for its largest and second-largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively. Use pointer arithmetic --not subscripting-- to visit array elements.

**Answer**: Check `ex12.c` to see it in action.

## Exercise 13
Section 8.2 had a program fragment in which two nested `for` loops initialized the array `ident` for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time. *Hint*: Since we won't be using `row` and `col` index variables, it won't be easy to tell where to store 1. Instead, we can use the fact that the first element of the array should be 1, the next `N` elements should be 0, the next element should be 1 and so forth. Use a variable to keep track of how many consecutive 0s have been stored; when the count reaches `N`, it's time to store 1.

**Answer**: Check `ex13.c` to see it in action.

## Exercise 14
Assume that the following array contains a week's worth of hourly temperature readings, with each row containing the readings for one day:
```c
int temperatures[7][24];
```

Write a statement that uses the `search` function (see Exercise 7) to search the entire `temperatures` array for the value 32.

**Answer**: Check `ex14.c` to see it in action. Basically the call goes like this:

    search(temperatures[0], size, 32);

We have to trick the function into believing we're passing a one-dimensional array, and we do that by passing `temperatures[0]` instead of just `temperatures` (since that would be a two-dimensional array).

Note also how we're calculating the `size` of the array as a product of **rows** times **columns**.
