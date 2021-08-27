# Chapter 11: Exercises

## Exercise 1
If `i` is a variable and `p` points to `i`, which of the following expressions are aliases for `i`?

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
(g) `*&i`: this is quite strange syntax, for demonstration purposes; it's extracting the address of `i`, so it becomes sort of a pointer on the fly, then apply the **indirection operator** to access the value.

## Exercise 2
If `i` is an `int` variable and `p` and `q` are pointers to `int`, which of the following assignments are legal?

(a) `p = i;`

(b) `*p = &i;`

(c) `&p = q;`

(d) `p = &q;`

(e) `p = *&q;`

(f) `p = q;`

(g) `p = *q;`  

(h) `*p = q;`  

(i) `*p = *q;`

**Answer**: Three options:

(e) `p = *&q;`: some weird syntax trick; extract the address of the pointer `&q` then its value with `*&q` and assign the address to `p`.

(f) `p = q;`: simply copying pointer `q` into pointer `p`.

(i) `*p = *q;`: copying the value of the reference pointed by `q` to `p`.

## Exercise 3
The following function supposedly computes the sum and average of the numbers in the array `a`, which has length `n`. `avg` and `sum` point to variables that the function should modify. Unfortunately, the function contains several errors; find and correct them.
```c
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0;
    for (i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}
```

**Answer**: The **indirection operator** must be used to change the values of the references from another function. See `ex03.c`

## Exercise 4
Write the following function:
```c
void swap(int *p, int *q);
```

When passed the addresses of two variables, `swap` should exchange the values of the variables:
```c
swap(&i, &j);    /* exchanges values of i and j */
```

**Answer**: See `ex04.c`.

## Exercise 5
Write the following function:
```c
void split_time(long total_sec, int *hr, int *min, int *sec);
```

`total_sec` is a time represented as the number of seconds since midnight. `hr`, `min` and `sec` are pointers to variables in which the function will store the equivalent time in hours (0-23), minutes (0-59) and seconds (0-59), respectively.

**Answer**: See `ex05.c`.

## Exercise 6
Write the following function:
```c
void find_two_largest(int a[], int n, int *largest, int *second_largest);
```

When passed an array `a` of length `n`, the function will search `a` for its largest and second-largest elements, storing them in the variables pointed to by `largest` and `second-largest` respectively.

**Answer**: See `ex06.c`.

## Exercise 7
Write the following function:
```c
void split_date(int day_of_year, int year, int *month, int *day);
```

`day_of_year` is an integer between 1 and 366, specifying a particular day within the year designated by `year`. `month` and `day` point to variables in which the function will store the equivalent month (1-12) and day within that month (1-31).

**Answer**: See `ex07.c`.
