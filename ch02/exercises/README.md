# Chapter 2: Exercises

## Exercise 1
Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Do you get a warning message from the compiler? If so, what's needed to make it go away?

**Answer**: I didn't get any compilation errors even using the flags `-Wall`, `-W`, and `-pedantic`. But when I added the `-std=c89` to select the standard, I got the following:
```
$ gcc -Wall -std=c89 ex01.c 
ex01.c: In function ‘main’:
ex01.c:10:1: warning: control reaches end of non-void function [-Wreturn-type]
   10 | }
      | ^
```

To make it go away, we just have to return an **integer value**, since we declared `main` of type `int`; basically we just have to add the line:
```c
return (0);
```

Now, if you compile `ex01.c` again, the warning goes away.

## Exercise 2
Consider the following program:
```c
#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```

(a) Identify the directives and statements in this program.

(b) What output does the program produce?

**Answer**:
(a) There is only one **preprocessing directive**: `include`; there are two statements: a function call to `printf` and a `return` statement.

(b) The *output* is as follows:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```

## Exercise 3
Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length`, and `width` with initializers and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` within the last `printf`.

**Answer**: Check `ex03.c`.

## Exercise 4
Write a program that declares several `int` and `float` variables -without initializing them- and then prints their values. Is there any pattern to the values? (Usually there isn't.)

**Answer**: Check `ex04.c`. The values of uninitialized `float` variables are **unpredictable** and will depend on the preexisting values at the memory positions of the uninitialized variables.

## Exercise 5
Which of the following are not legal C **identifiers**?

(a) `100_bottles`

(b) `_100_bottles`

(c) `one_hundred_bottles`

(d) `bottles_by_the_hundred`

**Answer**: Only **(a)** is not a legal identifier, because identifiers can not start with a digit.

## Exercise 6
Why is it not a good idea for an identifier to contain *more than one* adjacent **underscore** (as in `current___balance`, for example)?

**Answer**: Using more than one underscore in an identifier makes it hard to read; not comfy to be counting underscores in the identifier.

## Exercise 7
Which of the following are **keywords** in C?

(a) for

(b) If

(c) main

(d) printf

(e) while

**Answer**: **(a)** and **(e)**. Both `for` and `while` are keywords.
Option **(b)** is misleading, since `If` is written starting with **uppercase** `I` (`if` is indeed a keyword).
Options (c) and (d) don't represent keywords, since `main` and `printf` are just **function names**.

## Exercise 8
How many tokens are there in the following statement?
```c
answer=(3*q-p*p)/3;
```

**Answer**: There are fourteen tokens:

1. `answer`
2. `=`
3. `(`
4. `3`
5. `*`
6. `q`
7. `-`
8. `p`
9. `*`
10. Again `p`
11. `)`
12. `/`
13. Again `3`
14. `;`

## Exercise 9
Insert spaces between the tokens in Exercise 8 to make the statement easier to read.

**Answer**:
```
answer = (3 * q - p * p) / 3;
```

## Exercise 10
In the `dweight.c` program (Section 2.4), which spaces are essential?

**Answer**: Only three spaces:

1. The **space** between `#include` and `<stdio.h>`.
2. The **line break** at the end of the `#include` directive.
3. The **space** between `int` and `main`.
4. All the **newline** characters after the `main` declaration.
5. The **space** between `int` and the first variable name `height`.
6. The **space** between `return` and `0`.
