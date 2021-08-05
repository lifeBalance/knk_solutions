# Chapter 5: Exercises

## Exercise 1
The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

```
(a) i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);
(b) i = 5; j = 10; k = 1;
    printf("%d", k > i < j);
(c) i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k);
(d) i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);
```

**Answer**: Check `ex01.c`; the output is:

(a) `1`; we can parenthesize: `k = ((i * j) == 6)`

(b) `1`; we can parenthesize: `(k > i) < j`

(c) `1`; we can parenthesize: `(i < j) == (j < k))`

(d) `0`; we can parenthesize: `((i % j) + i) < k`

## Exercise 2
The following program fragments illustrate the logical operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

```
(a) i = 10; j = 5;
    printf("%d", !i < j);
(b) i = 2; j = 1;
    printf("%d", !!i + !j);
(c) i = 5; j = 0; k = -5;
    printf("%d", i && j || k);
(d) i = 1; j = 2; k = 3;
    printf("%d", i < j || k);
```

**Answer**: Check `ex02.c`; the output is:

(a) `1`; we can parenthesize: `(!i) < j)`

(b) `1`; we can parenthesize: `(!!i) + (!j)`

(c) `1`; we can parenthesize: `(i && j) || k`

(d) `1`; we can parenthesize: `(i < j) || k`

## Exercise 3
The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

```
(a) i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);
(b) i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
(c) i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);
(d) i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
```

**Answer**: Check `ex03.c`; the output is:

(a) `1`; we can parenthesize: `(i < j) || ((++j) < k))`. Because of short-circuit evaluation, as soon as `i < j` is evaluated to `1`, the expression yields its value and evaluation stops.

Regarding `i`, `j`, and `k`, their values are: `3 4 5`. Since the right side of the **OR** operator is never evaluated, `j` never increases its value.

(b) `0`; we can parenthesize: `(i - 7) && (j++ < k)`. Because of short-circuit evaluation, as soon as `(i - 7)` evaluates to `0`, since it's the left operand of an **AND** logical operator, the expression yields its value and evaluation stops.

Regarding `i`, `j`, and `k`, their values are: `7 8 9`. Since the right side of the **AND** operator is never evaluated, `j` never increases its value.

(c) `1`. Because of short-circuit evaluation, as soon as `i = j` evaluates to `8`, since it's the left operand of an **OR** logical operator, the expression yields its value, `1` and evaluation stops.

Regarding `i`, `j`, and `k`, their values are: `8 8 9`. Since the right side of the **OR** operator is never evaluated, the value of `j` never is asigned the value of `k`.

(d) `1`; we can parenthesize: `(++i) || (++j) && (++k)`. Because of short-circuit evaluation, as soon as `++i` evaluates to `2`, since it's the left operand of an **OR** logical operator, the expression yields its value, `1` and evaluation stops. 

Regarding `i`, `j`, and `k`, their values are: `2 1 1`. Since the right side of the **OR** operator is never evaluated, neither `j` or `k` increment their values.

## Exercise 4
Write a single expression whose value is either `-1`, `0` or `+1`, depending on whether `i` is less than, equal to, or greater than `j`, respectively.

**Answer**: `(i > j) - (i < j)`. Check `ex04.c` to see it in action.

## Exercise 5
Is the following if statement legal?

```
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `0`?

**Answer**: It's legal but confusing. It prints the message, because `n >= 1` evaluates to `0`, and `0` is indeed **less or equal than** ``10``, so the expression `0 <= 10` evaluates to `1` (true). Check `ex05.c` to see it in action.

To properly check if `n` is within the range 1 to 10 we could write: `n >= 1 && n <= 10`.

## Exercise 6
Is the following if statement legal?

```
if (n == 1 - 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `5`?

**Answer**: It's legal but confusing. Since the equality operators have lower precedence, the expression is evaluated like this: `n == (1 - 10)`. So only when `n` has the value `-9`, the whole expression evaluates to `1`; otherwise to `0`. Check `ex06.c`

To properly check if `n` is within the range 1 to 10 we could write: `n >= 1 && n <= 10`.

## Exercise 7
What does the following statement print if `i` has the value `17`? What does it print if `i` has the value `-17`?

```
printf("%d\n", i >= 0 ? i : -i);
```

**Answer**: It prints `17` in both cases: If `i` is `17`, it prints `17`. If it's `-17`, it prints the opposite of `-17`, which is `17`. That logic can be used to print the **absolute value** of a number. Check `ex07.c` to see it in action.

## Exercise 8
The following if statement is unnecessarily complicated. Simplify it as much as possible. (*Hint*: The entire statement can be replaced by a single assignment.)

```
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenager = false;
```

**Answer**: It can be initially simplified to:

```
if (age >= 13 && age <= 19)
	teenager = true;
else
	teenager = false;
```

Which can be further reduced to a single statement using the **conditional operator**:
```
teenager = (age >= 13 && age <= 19)? true : false;
```

Or even to the minimalist:
```
teenager = (age >= 13) && (age <= 19);
```

Check `ex08.c` to see it in action.

## Exercise 9
Are the following if statements equivalent? If not, why not?
```
if (score >= 90)       if (score < 60)
    printf("A");           printf("F");
else if (score >= 80)  else if (score < 70)
    printf("B");           printf("D");
else if (score >= 70)  else if (score < 80)
    printf("C");           printf("C");
else if (score >= 60)  else if (score < 90)
    printf("D")            printf("B");
else                   else
    printf("F");           printf("A");
```

**Answer**: Check `ex09.c`. Yes, they're equivalent; they just use inverse logic.

## Exercise 10
What output does the following program fragment produce? (Assume that `i` is an integer variable.)
```
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

**Answer**: The output is:
```
onetwo
```
Since `i % 3` equals `1`, it will jump to the second label (`case 1`) and since there's no `break` statement, it will **fall through** and run the two last statements. Check `ex10.c` to see it in action.

## Exercise 11
The following table shows telephone area codes in the state of Georgia along with the largest city in each area:
```
Area code 	Major city
229 		Albany
404 		Atlanta
470 		Atlanta
478 		Macon
678 		Atlanta
706 		Columbus
762 		Columbus
770 		Atlanta
912 		Savannah
```

Write a `switch` statement whose controlling expression is the variable `area_code`. If the value of `area_code` is in the table, the `switch` statement will print the corresponding city name. Otherwise, the switch statement will display the message `"Area code not recognized"`. Use the techniques discussed in Section 5.3 to make the `switch` statement as simple as possible.

**Answer**: Check `ex11.c`.
