# Chapter 4: Exercises

## Exercise 1
Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

(a)
```
i = 5; j = 3;
printf("%d %d", i / j, i % j);
```

(b)
```
i = 2; j = 3;
printf("%d", (i + 10) % j);
```

(c)
```
i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);
```

(d)
```
i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);
```

**Answer**: Check `ex01.c` to see it in action. The output is:
```
1 2
0
1
0
```

## Exercise 2
If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.

**Answer**: According to the book, in `C89`, the outcome of a **division** (or of a modulo operation) when either of the operands is negative is implementation dependent; the result of `-9 / 7` may be rounded down to `-2` or up to `-1`. In **C99** the result of such division is always truncated toward zero; so `-9 / 7` would be `-1`.

In my case, using **gcc 9.3.0**, I got `-1` when compiling with the flags `-std=89` as well as with `-std=99`.

## Exercise 3
What is the value of each of the following expressions in **C89**? (Give all possible values if an expression may have more than one value.)

(a) `8 / 5`

(b) `-8 / 5`

(c) `8 / -5`

(d) `-8 / -5`

**Answer**: Check `ex03.c` to see it in action.

In **C89**, when one of the operands of an integer division is negative, the result will be implementation dependant: it may truncate towards zero, or away from it. We'll get `-1` or `-2`, depending on the implementation

(a) Both operands are positive; so the result is always `1` (not implementation dependant).

(b) Since one of the operands is negative the result is implementation dependant: `-1` (if it truncates toward zero) or `-2` (if it rounds away from zero); in my case `-1`.

(c) Same deal as above.

(d) In both standards, since both operands are negative we'll get a positive result; but this result could be truncated towards zero `1` or away from it (`2`) in the case of **C89** it will depend on the implementation; I got `1`.

## Exercise 4
Repeat Exercise 3 for **C99**.

**Answer**: Check `ex03.c` as well; just compile it with the `std=99` flag.

In **C99** when one operand is negative, the result of the integer division is always truncated towards zero. (not implementation dependant)

(a) Both operands are positive; we should always get `1` in this case.

(b) It should round towards zero, so `-1`.

(c) It should round towards zero, so `-1`.

(d) It should always truncate towards zero, so the result must be `1`. I got `1` compiling with both flags (`-std=89` and `-std=99`).

## Exercise 5
What is the value of each of the following expressions in **C89**? (Give all possible values if an expression may have more than one value.)

(a) `8 % 5`

(b) `-8 % 5`

(c) `8 % -5`

(d) `-8 % -5`

**Answer**: Check `ex05.c` to see it in action.

In **C89**, when one of the operands of an integer **modulo operation** is negative, the result will be implementation dependant: it may be rounded up or down.

(a) Both operands are positive, so always `3`.

(b) One operand is negative, so either`-3` or `3`; in my case the result was **rounded down**, `-3`.

(c) One operand is negative, so either`-3` or `3`; in my case the result was **rounded up**, `3`.

(d) Both operands are negative, which I guess in the case of the **modulo** operator, it's a subcase of one negative operand. So also implementation dependant; in my case the result was **rounded down**, `-3`.

## Exercise 6
Repeat Exercise 5 for **C99**.

**Answer**: Check `ex05.c` as well; just compile it with the `std=99` flag.

According to the book, in **C99** when one operand is negative, the **remainder** of the integer division is always truncated towards zero (not implementation dependant). What I've noticed is that when one (or both) operands are negative, the sign of the remainder depends on the sign of the **dividend**. 

(a) Both operands are positive, so always `3`.

(b) In this case the **dividend** is negative, so the sign of the remainder is negative too. 

(c) In this case the **dividend** is positive, so the sign of the remainder is positive too. 

(d) Both operands are negative, in this case the **dividend** is positive, so the sign of the remainder is positive too.

## Exercise 7
The algorithm for computing the UPC check digit ends with the following steps:

Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.

It's tempting to try to simplify the algorithm by using these steps instead:

Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.

Why doesn't this work?

**Answer**: I don't know why.

## Exercise 8
Would the `upc.c` program still work if the expression `9 - ((total - 1) % 10)` were replaced by `(10 - (total % 10)) % 10`?

**Answer**: Yes, it would work.

## Exercise 9
Show the output produced by the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

(a)
```
i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);
```

(b)
```
i = j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);
```

(c)
```
i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);
```

(d)
```
i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);
```

**Answer**: Check `ex09.c`. The output is:

(a) Let's parenthesize: `i = i * (j + 1)`; So `i = 63` and `j = 8`.

(b) Let's parenthesize: `i = i + (j = (j + k))`; So `j = 2`, `k = 1`, and `i = 3`.

(c) Let's parenthesize: `i = i - (j = (j - k))`; So `k = 3`, `j = -1`, and `i = 2`.

(d) Let's parenthesize: `i = i * (j = (j * k))`; So `k = 0`, `j = 0`, and `i = 0`.

## Exercise 10
Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.

(a)
```
i = 6;
j = i += i;
printf("%d %d", i, j);
```

(b)
```
i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);
```

(c)
```
i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);
```

(d)
```
i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);
```

**Answer**: Check `ex10.c`. The output is:

(a) Let's parenthesize: `j = i = (i + i)`; So `i = 12` and `j = 12`.

(b) Let's parenthesize: `j = (i = (i - 2)) + 1`; So `i = 3`, and `j = 4`.

(c) Let's parenthesize: `j = 6 + (i = 2.5)`; So `i = 2`, `j = 8`.

(d) Let's parenthesize:  `j = (i = 6) + (j = 3);` So `i = 6`, and `j = 9`.

## Exercise 11
Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.

(a)
```
i = 1;
printf("%d ", i++ - 1);
printf("%d", i);
```

(b)
```
i = 10; j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);
```

(c)
```
i = 7; j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);
```

(d)
```
i = 3; j = 4; k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);
```

**Answer**: Check `ex11.c`. The output is:

(a) `0 2`
(b) `4 11 6`
(c) `0 8 7`
(d) `3 4 5 4`

## Exercise 12
Show the output produced by each of the following program fragments. Assume that i and j are int variables.

(a)
```
i = 5;
j = ++i * 3 - 2;
printf("%d %d", i, j);
```

(b)
```
i = 5;
j = 3 - 2 * i++;
printf("%d %d", i, j);
```

(c)
```
i = 7;
j = 3 * i-- + 2;
printf("%d %d", i, j);
```

(d)
```
i = 7;
j = 3 + --i * 2;
printf("%d %d", i, j);
```

**Answer**: Check `ex12.c`. The output is:

(a) `6 16`

(b) `6 -7`

(c) `6 23`

(d) `6 15`

## Exercise 13
Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it? Justify your answer.

**Answer**: Check `ex13.c`. For the sake of clarity, let's assume that the initial value of `i` is `0`. The expression `i += 1` has the **side effect** of increasing the value of `i` by one, so in our example, `i == 1`. This expression evaluates also to the new value of `i`, in this case `1`.
* `++i` evaluates to `1` and the **side effect** (`i` increasing its value to `1`) has the same value that the **evaluation** of the expression, also `1`.
* `i++` evaluates to the initial value of `i`, in our example `0`; and the **side effect** takes place after this evaluation.

## Exercise 14
Supply parentheses to show how a C compiler would interpret each of the following expressions.

(a) `a * b - c * d + e`

(b) `a / b % c / d`

(c) `- a - b + c - + d`

(d) `a * - b / c - d`

**Answer**: Check `ex14.c`.

(a) `(((a * b) - (c * d)) + e)`

(b) `(((a / b) % c) / d)`

(c) `((((-a) - b) + c) - (+d))`

(d) `(((a * (-b)) / c) - d)`

## Exercise 15
Give the values of `i` and `j` after each of the following expression statements has been executed. (Assume that `i` has the value `1` initially and `j` has the value `2`.)

(a) `i += j;`

(b) `i--;`

(c) `i * j / i;`

(d) `i % ++j;`

**Answer**: Check `ex15.c`.

(a) `i == 3` and `j == 2` (Only the value of `i` is changed.)

(b) `i == 2` and `j == 2` (Only the value of `i` is changed.)

(c) `i == 2` and `j == 2` (None of the variables is changed.)

(d) `i == 2` and `j == 3` (Only the value of `j` is changed.)
