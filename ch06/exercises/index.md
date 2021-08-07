# Chapter 6: Exercises

## Exercise 1
What output does the following program fragment produce?
```
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
```

**Answer**: Check `ex01.c`; the output is:
```
1 2 4 8 16 32 64 128
```

## Exercise 2
What output does the following program fragment produce?
```
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

**Answer**: Check `ex02.c`; the output is:
```
9384 938 93 9
```

## Exercise 3
What output does the following for statement produce?

```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

**Answer**: Check `ex03.c`; the output is:
```
5 4 3 2
```

The **controlling expression** of this loop is `i > 0, j > 0`, but since it uses comma operator, only the part after the comma (`j > 0`) controls the fate of the loop; the part before the comma (`i > 0`) is evaluated, then discarded.  (The compiler should warn us about the first expression before the comma (`i > 0`) being unused)

So the number of iterations will depend on the value of `j`, which it's initialized at `4`, then `3`, then `2`, then `1`; **four iterations** overall. But the value of `i` is the one that is printed out.

## Exercise 4
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
```
(a) for (i = 0; i < 10; i++) ...
(b) for (i = 0; i < 10; ++i) ...
(c) for (i = 0; i++ < 10; ) ...
```

**Answer**: The third statement `(c)` is not equivalent, because `i` is incremented in the **controlling expression**; during the first iteration, when `i` equals `0`, it is compared to 10, and right after it is incremented, so that the first value printed is `1`. This loop will print the values from `1` to `10`, whereas the first two loops print from `0` to `9`.

## Exercise 5
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
```
(a) while (i < 10) {...}
(b) for (; i < 10;) {...}
(c) do {...} while (i < 10);
```

**Answer**: The third statement `(c)` is not equivalent, because regardless of the value of `i`, the body of a `do` loop runs **at least once**. If the value of `i` is greater or equal to `10`, the first two loop bodies don't run, whereas the `do` loop will run once, and then exit when the **controlling expression** evaluates to `0`.

Check `ex05.c` to see it in action.

## Exercise 6
Translate the program fragment of Exercise 1 into a single `for` statement.

**Answer**: Check `ex06.c`.

## Exercise 7
Translate the program fragment of Exercise 2 into a single `for` statement.

**Answer**: Check `ex07.c`.

## Exercise 8
What output does the following for statement produce?
```
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

**Answer**: Check `ex08.c`. The output is:
```
10 5 3 2 1 1 1 1 ...
```

Since `i` is always incremented on the print statement, the **controlling expression** always evaluates to `1`, and we get stuck in an infinite loop.

## Exercise 9
Translate the `for` statement of Exercise 8 into an equivalent `while` statement. You will need one statement in addition to the `while` loop itself.

**Answer**: Check `ex09.c`. I used a comma expression to pack ``i /= 2`` next to the controlling expression, so I was left with a single statement in the body of the loop.

## Exercise 10
Show how to replace a `continue` statement by an equivalent `goto` statement.

**Answer**: Check `ex10.c`.

## Exercise 11
What output does the following program fragment produce?
```
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

**Answer**: Check `ex11.c`. The output is:
```
20
```
That's because the `if` statement is **non-zero** for all **odd** values of `i`. So we get the sum of the **even** values of `i`: 2, 4, 6, and 8, which add to `20`.

## Exercise 12
The following "prime-testing" loop appeared in section 6.4 as an example:
```
for (d = 2; d < n; d++)
    if (n % d == 0)
        break;
```

This loop isn't very efficient. It's not necessary to divide `n` by all numbers between `2` and `n-1` to determine whether it's **prime**. In fact, we need only check divisors up to the **square root** of `n`. Modify the loop to take advantage of this fact. *Hint*: Don't try to compute the square root of `n`; instead, compare `d * d` with `n`.

**Answer**: Check `ex12.c`. We don't need to check all numbers up to `n-1`, if a number is **not prime**, we'll find a divisor before the square root (truncated) of the number.

## Exercise 13
Rewrite the following loop so that its body is empty:
```
for (n = 0; m > 0; n++)
    m /= 2;
```

**Answer**: The answer is:
```
for (n = 0; m > 0; n++, m /= 2)
    ;
```
But check `ex13.c` to see a clearer example.

## Exercise 14
Find the error in the following program fragment and fix it.
```
if (n % 2 == 0);
    printf("n is even\n");
```

**Answer**: There's a trailing `;` at the end of the `if` statement, which represents the **null** statement. So when the condition is true, a **null** statement runs. After that, the print statement runs no matter what. Check `ex14.c` to see the fix (just delete the semicolon!).
