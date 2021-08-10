# Chapter 7: Exercises

## Exercise 1
Give the decimal value of each of the following integer constants.
```
(a) 077
(b) 0x77
(c) 0XABC
```

**Answer**: Check `ex01.c` to confirm, but the values are:

(a) `077` is in **octal**: (7 *  8<sup>1</sup>) + (7 *  8<sup>0</sup>) = 56  + 7 = 63

(b) `0x77` is in **hexadecimal**: (7 * 16<sup>1</sup>) + (7 * 16<sup>0</sup>) = 112 + 7 = 119

(c) `0xABC` is in **hexadecimal**: (10 * 16<sup>2</sup>) + (11 * 16<sup>1</sup>) + (12 * 16<sup>0</sup>) = 2560 + 176 + 12 = 2748

## Exercise 2
Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.
```
(a) 010E2
(b) 32.1E+5
(c) 0790
(d) 100_000
(e) 3.987e-2
```
**Answer**: They are all legal except:

(c) `0790` starts with `0`, which means is in **octal**, but at the same time, it uses the digit `9` which is undefined in base 8.

(d) `100_000` uses an underscore, which is not recognized in C. (It's legal and used in other languages such as Java and C#)

## Exercise 3
Which of the following are not legal types in C?
```
(a) short unsigned int
(b) short float
(c) long double
(d) unsigned long
```

**Answer**: They're all legal except (b), `short float`. The only available floating point types are `float`, `double` and `long double`. The `short` type can be used as a modifier for the `int` type, or just by itself (both uses define the same type).

## Exercise 4
If `c` is a variable of type `char`, which one of the following statements is illegal?
```
(a) i += c; /* i has type int */
(b) c = 2 * c - 1;
(c) putchar(c);
(d) printf(c);
```

**Answer**: Check `ex04.c`. Statement (d) is illegal, since `printf` doesn't take type `char` as argument; to print a character we should provide a **format string** and the proper **conversion specification** for characters (`%c`).

## Exercise 5
Which one of the following is not a legal way to write the number `65`? (Assume that the character set is ASCII.)
```
(a) 'A'
(b) 0b1000001
(c) 0101
(d) 0x41
```

**Answer**: All are legal options except (b), because `0b1000001` starts with a `0`, which implies it's **octal**. The `0b` prefix to signify **numbers in binary** is legal and used in other languages such as **Java** and **C#** (but not in good old **C**) where the literal `0b1000001` would indeed be a valid way of representing the number `65`.

That being said, the syntax is supported as a **compiler extension** by ``gcc``. So in my system I didn't get an error with any of the options.

(a) 'A'			= The ASCII code for the character 'A' is 65.
(b) 0b1000001	= In binary 64 + 1 = 65.
(c) 0101		= In octal 64 + 1 = 65.
(d) 0x41		= In hexadecimal (4 * 16^1) + (1 * 16^0) = 64 + 1 = 65.

## Exercise 6
For each of the following items of data, specify which one of the types `char`, `short`, `int`, or `long` is the smallest one guaranteed to be large enough to store the item.
```
(a) Days in a month
(b) Days in a year
(c) Minutes in a day
(d) Seconds in a day
```

**Answer**: Check `ex06.c`.

(a) `char`, -128 to 127 when signed. When unsigned, the range is 0 to 255. The behaviour is implementation defined, so it's a good idea to use the `signed` and `unsigned` modifier to make sure.  The implementation shall define `char` to have the same range, representation, and behavior as either `signed char` or `unsigned char`.

(b) `short`, -32,768 to 32,767. Or better yet, `unsigned short` (0 to 65,535), unless the context needs the use of *negative days* or something like that. 

(c) (Minutes in a day 60 * 24 = 1440) We can use `short` (-32,768 to 32,767) or `unsigned short` (0 to 65,535).

(d) (Seconds in a day: 60 * 60 * 24 = 86400) So `unsigned int` if we are using a **4 byte** system, which can store values from 0 to 4,294,967,295.

In a **2 byte** system, an `unsigned int` can only represent values from 0 to 65,535, not enough in our example; in such a system we would have to use a `long` (-9223372036854775808 to 9223372036854775807).

## Exercise 7
For each of the following character escapes, give the equivalent octal escape. (Assume that the character set is ASCII.) You may which to consult Appendix E, which lists the numerical codes for ASCII characters.
```
(a) \b
(b) \n
(c) \r
(d) \t
```

**Answer**: Check `ex07.c`. The **octal** equivalents are:

(a) Bell (`\b`): `\07`.

(b) Newline character (`\n`): `\010`.

(c) Carriage return (`\r`): `\015`.

(d) Horizontal tab (`\t`): `\011`.

## Exercise 8
Repeat Exercise 7, but give the equivalent hexadecimal escape.

**Answer**: Check `ex08.c`. The **hexadecimal** equivalents are:

(a) Bell (`\b`): `\x08`.

(b) Newline character (`\n`): `\x0a`.

(c) Carriage return (`\r`): `\x0d`.

(d) Horizontal tab (`\t`): `\x09`.

## Exercise 9
Suppose that `i` and `j` are variables of type `int`. What is the type of the expression `i / j + 'a'`?

**Answer**: Check `ex09.c`.
The type is also `int`, because in C, a character is just a representation of an underlying integer. So we can totally use a character in the expression above; the character `a` is the integer `97`.

## Exercise 10
Suppose that `i` is a variable of type `int`, `j` is a variable of type `long`, and `k` is a variable of type `unsigned int`. What is the type of the expression `i + (int) j * k`?

**Answer**: Check `ex10.c`. Also `int`, because `j` is **explicitely cast** to `int`, and `k`, when it's multiplied by `j`, it's **implicitely cast** to int too.

## Exercise 11
Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. What is the type of the expression `i * f / d`?

**Answer**: Check `ex11.c`. It's `double`, because `i * j` is **implicitely cast** to `float`, then	when it's divided by `d`, it's **implicitely cast** to `double`.

## Exercise 12
Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and d is a variable of type `double`. Explain what conversions take place during the execution of the statement:

`d = i + f;`

**Answer**: Check `ex12.c`. ``i + f`` is implicitely cast to ``float`` before the operation; then the whole expression is implicitely cast to ``double`` before being assigned to ``d``.

## Exercise 13
Assume that a program contains the following declarations:
```
char c = '\1';
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;
```

Give the value and the type of each expression listed below.

(a) `c * i`

(b) `s + m`

(c) `f / c`

(d) `d / s`

(e) `f - d`

(f) `(int) f`

**Answer**: Check `ex13.c` to see it in action.

(a) The variable `c` holds the special character **Start of Header** (`\1`), whose integer value is `1`. When we multiply it by the integer `-3`, we get `-3` and the type of the expression is `int`.

(b) The variable `s` is type `short`, and its value is `2`. When we add it the value of `m`, the result is `7` and the whole expression is promoted to `long`.

(c) When we divide `f` by `c`, this last variable is cast to `float`, the same as the resulting value of the expression, `6.5`.

(d) The expression is cast to `double`: its value is `3.75`

(e) The expression is cast to `double`; its value is `-1`

(f) The variable `f` is explicitely cast to an `int`, and the decimal part is truncated; hence the resulting value is `6`.

## Exercise 14
Does the following statement always compute the fractional part of `f` correctly (assuming that `f` and `frac_part` are `float` variables)?
```
frac_part = f - (int) f;
```

If not, what's the problem?

**Answer**: Check `ex14.c`. **Not always**; if the integer part of `f` doesn't fit into the range of an integer (2,147,483,647), we'll get the wrong result.

## Exercise 15
Use `typedef` to create types names `Int8`, `Int16`, and `Int32`. Define the types so that they represent 8-bit, 16-bit and 32-bit integers on your machine.

**Answer**: Check `ex15.c`. What I did first of all, was to make sure that the types `short`, and `int`, represent `8`, `16`, and `32` bit respectively in my system. Then I just defined the types.
