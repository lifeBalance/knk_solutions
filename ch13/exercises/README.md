# Chapter 13: Exercises

## Exercise 1
The following function calls supposedly write a single newline character, but some are incorrect. Identify which calls don't work and explain why.

(a) `printf("%c", '\n');`

(b) `printf("%c", "\n");`

(c) `printf("%s", '\n');`

(d) `printf("%s", "\n");`

(e) `printf('\n');`

(f) `printf("\n");`

(g) `putchar('\n');`

(h) `putchar("\n");`

(i) `puts('\n');`

(j) `puts("\n");`

(k) `puts("");`

**Answer**:

(a) `printf("%c", '\n');` **Valid**.

(b) `printf("%c", "\n");` **Invalid**, the conversion specification is expecting a character, but we're passing a string!

(c) `printf("%s", '\n');` **Invalid**, the conversion specification is expecting a string, but we're passing a character!

(d) `printf("%s", "\n");` **Valid**.

(e) `printf('\n');` **Invalid**, ``printf`` expects a **format string** as its first argument, but we're passing a character!

(f) `printf("\n");` **Valid**.

(g) `putchar('\n');` **Valid**.

(h) `putchar("\n");` **Invalid**, ``putchar`` expects a **character** as its first argument, but we're passing a string!

(i) `puts('\n');` **Invalid**, ``puts`` expects a **string** as argument, but we're passing a character!

(j) `puts("\n");` **Valid**.

(k) `puts("");` **Valid**.

## Exercise 2
Suppose that `p` has been declared as follows:
```c
char *p = "abc";
```

Which of the following function calls are legal? Show the output produced by each legal call, and explain why the others are illegal.

(a) `putchar(p);`

(b) `putchar(*p);`

(c) `puts(p);`

(d) `puts(*p);`

**Answer**: Check `ex02.c`.

(a) `putchar(p);` **Illegal** since `putchar` expects an integer (value of a character), but `p` is pointer to string. Issues a warning an prints nothing.

(b) `putchar(*p);` **Legal**, it prints `a`.

(c) `puts(p);` **Legal** since `p` is a pointer to string, exactly what `puts` is expecting. It prints `abc`.

(d) `puts(*p);` **Illegal**, since `*p` is dereferencing the string pointed by `p`, so `puts` receives a character; I got a segmentation fault and nothing was printed.
