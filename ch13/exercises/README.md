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

## Exercise 9
What will be the value of the string `s1` after the following statements have been executed?
```c
strcpy(s1, "computer");
strcpy(s2, "science");
if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
else
    strcat(s2, s1);
s1[strlen(s1)-6] = '\0';
```

**Answer**: See `ex09.c`.

## Exercise 10
The following function supposedly creates an identical copy of a string. What's wrong with the function?
```c
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

**Answer**: The problem is that `q` is gonna dissapear once we exit the `duplicate` function. See `ex10.c` for a fix.

## Exercise 11
The Q&A section at the end of this chapter shows how the `strcmp` function might be written using array subscripting. Modify the function to use pointer arithmetic instead.

**Answer**: See `ex11.c`.

## Exercise 12
Write the following function:
```c
void get_extension(const char *file_name, char *extension);
```

`file_name` points to a string containing a file name. The function should store the extension on the file name in the string pointed to by `extension`. For example, if the file name is `"memo.txt"`, the function will store `"txt"` in the string pointed to by `extension`. If the file name doesn't have an extension, the function should store an empty string (a single null character) in the string pointed to by `extension`. Keep the function as simple as possible by having it use the `strlen` and `strcpy` functions.

**Answer**: See `ex12.c`.

## Exercise 13
Write the following function:
```c
void build_index_url(const char *domain, char *index_url);
```

`domain` points to a string containing an Internet domain, such as `"knking.com"`. The function should add `"http://www."` to the beginning of this string and `"/index.html"` to the end of the string, storing the result in the string pointed to by `index_url`. (In this example, the result will be `"http://www.knking.com/index.html"`.) You may assume that `index_url` points to a variable that is long enough to hold the resulting string. Keep the function as simple as possible by having it use the `strcat` and `strcpy` functions.

**Answer**: See `ex13.c`.

## Exercise 14
What does the following program print?
```c
#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
```

**Answer**: See `ex14.c`. It prints `Grinch`; it traverses the string and change the value of each character to the one below: `H` becomes `G`, `s` becomes `r`, and so on.

## Exercise 15
Let `f` be the following function:
```c
int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
```

(a) What is the value of `f("abcd", "babc")`?

(b) What is the value of `f("abcd", "bcd")`?

(c) In general, what value does `f` return when passed two strings `s` and `t`?

**Answer**: See `ex15.c`.

(a) `3`

(b) `0`

(c) It returns the amount of characters of the first string that appears in the second string, but stops counting them as soon as one character is missing.

## Exercise 16
Use the techniques of Section 13.6 to condense the `count_spaces` function of Section 13.4. In particular, replace the `for` statement by a `while` loop.

**Answer**: See `ex16.c`.

## Exercise 17
Write the following function:

```c
bool test_extension(const char *file_name, const char *extension);
```

`file_name` points to a string containing a file name. The function should return `true` if the file's extension matches the string pointed to by `extension`, ignoring the case of letters. For example, the call `test_extension("memo.txt", "TXT")` would return `true`. Incorporate the "search for the end of a string" idiom into your function. *Hint*: Use the `toupper` function to convert characters to upper-case before comparing them.

**Answer**: See `ex17.c`.

## Exercise 18
Write the following function:
```c
void remove_filename(char *url);
```

`url` points to a string containing a URL (Uniform Resource Locator) that ends with a file name (such as `"http://www.knking.com/index.html"`). The function should modify the string by removing the file name and the preceding slash. (In this example, the result will be `"http://www.knking.com"`.) Incorporate the "search for the end of a string" idiom into your function. *Hint*: Have the function replace the last slash in the string by a null character.

**Answer**: See `ex18.c`.
