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

## Exercise 3
Suppose that we call `scanf` as follows:
```c
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s` and `j` after the call? (Assume that `i` and `j` are `int` variables and `s` is an array of characters.)

**Answer**: Check `ex03.c` to see it in action.

* The first `%d` scans `12` into `i`.
* The `%s` scans `abc34` (up until the first space) into `s`.
* The last `%d` scans `56` into `j`.

## Exercise 4
Modify the `read_line` function in each of the following ways:

(a) Have it skip whitespace before beginning to store input characters.

(b) Have it stop reading at the first whitespace character. *Hint*: To determine whether or not a character is whitespace, call the `isspace` function.

(c) Have it stop reading at the first newline character, then store the newline character in the string.

(d) Have it leave behind characters that it doesn't have room to store.

**Answer**: See `ex04a.c`, `ex04b.c`, `ex04c.c`, and `ex04d.c`.

## Exercise 5
(a) Write a function named `capitalize` that capitalizes all letters in its argument. The argument will be a null-terminated string containing arbitrary characters, not just letters. Use array subscripting to access the characters in the string. *Hint*: Use the `toupper` function to convert each character to upper case.

(b) Rewrite the `capitalize` function, this time using pointer arithmetic to access the characters in the string.

**Answer**: See `ex05a.c` and `ex05b.c`.

## Exercise 6
Write a function named `censor` that modifies a string by replacing every occurrence of `foo` by `xxx`. For example, the string `"food fool"` would become `"xxxd xxxl"`. Make the function as short as possible without sacrificing clarity.

**Answer**: See `ex06.c`.

## Exercise 7
Suppose that `str` is an array of characters. Which one of the following statements is not equivalent to the other three?

(a) `*str = 0;`

(b) `str[0] = '\0';`

(c) `strcpy(str, "");`

(d) `strcat(str, "");`

**Answer**: See `ex07.c`.

(a) `*str = 0;` is dereferencing `str`, which points to the first character of the string, setting it to the integer `0`, which is the ASCII value of the **null character**.

(b) `str[0] = '\0';`, is also null terminating the string at the first character, so what comes after doesn't count.

(c) `strcpy(str, "");` is copying an empty (null terminated) string to `str`, smashing its previous contents.

(d) `strcat(str, "");` is attaching an empty string to the end of `str`; this is the only **not equivalent** statement.

## Exercise 8
What will be the value of the string `str` after the following statements have been executed?
```c
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
```

**Answer**: See `ex08.c`.
