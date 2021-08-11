# Chapter 7: Programming projects

## Project 1
The `square2.c` program of Section 6.3 will fail (usually by printing strange answers) if `i * i` exceeds the maximum `int` value. Run the program and determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again. (Don't forget to update the conversion specifications in the call of `printf`!) Then try `long`. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?

**Answer**: If we declare `i` as an integer, when we multiply it by itself to calculate the square of `n`, the expression is type `int`; `46341` is the smallest value that would cause our program to fail, since its square would yield `-2,147,479,015` (a negative number, clearly an overflow); `46340` is the biggest safe value that we can assign to `n`, because when we square it, the result is `2,147,483,647`, within the limits of an `int` range.

Below is a list of alternatives types when declaring `i`, along with the minimum values that would cause failure:

* If we declare `i` as an `short`, the smallest value of `n` that causes failure would be `181` (180<sup>2</sup> = 32,761).
* If we declare `i` as an `int`, the smallest value of `n` that causes failure would be `46341` (46341<sup>2</sup> = 2,147,488,281).
* If we declare `i` as an `long`, the smallest value of `n` that causes failure would be `3,037,000,500`(3,037,000,500<sup>2</sup> = 9.223372e+18).

The limits above work because my computer stores:

* `short` using 16 bits (range -32,768 to 32,767).
* `int` using 32 bits (range -2,147,483,648 to 2,147,483,647).
* `long` using 64 bits (range -9,223,372,036,854,775,807, to 9,223,372,036,854,775,807).

Check `pr01.c` to try these values.

## Project 2
Modify the `square2.c` program of Section 6.3 so that it pauses after every 24 squares and displays the following message:
```
Press Enter to continue...
```

After displaying the message, the program should use `getchar` to read a character. `getchar` won't allow the program to continue until the user pressed the Enter key.

**Answer**: Check `pr02.c`.

## Project 3
Modify the `sum2.c` program of Section 7.1 to sum a series of double values.

**Answer**: Check `pr03.c`.

## Project 4
Write a program that translates an alphabetic phone number into numeric form:
```
Enter phone number: CALLATT
2255288
```

(In case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
```
Enter phone number: 1-800-COL-LECT
1-800-265-5328
```

You may assume that any letters entered by the user are upper case.

**Answer**: Check `pr04.c`.

## Project 5
In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another, based on the letter's rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values of its letters:
```
Enter a word: pitfall
Scrabble value: 12
```

Your program should allow any mixture of lower-case and upper-case letters in the word. *Hint*: Use the `toupper` library function.

**Answer**: Check `pr05.c`.

## Project 6
Write a program that prints the values of `sizeof(int)`, `sizeof(short)`, `sizeof(long)`, `sizeof(float)`, `sizeof(double)` and `sizeof(long double)`.

**Answer**: Check `pr06.c`.

## Project 7
Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply or divide two fractions (by entering either +, -, * or / between the fractions).

**Answer**: Check `pr07.c`.

## Project 8
Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. The input will have the form hours:minutes followed by either `A`, `P`, `AM` or `PM` (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:
```
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
```

You may assume that the input has one of these forms; there is no need to test for errors.

**Answer**: Check `pr08.c`.

## Project 9
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
```
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
```

See Programming Project 8 for a description of the input format.

**Answer**: Check `pr09.c`.

## Project 10
Write a program that counts the number of vowels (a, e, i, o and u) in a sentence:
```
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
```

**Answer**: Check `pr10.c`.

## Project 11
Write a program that takes a first name and a last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:
```
Enter a first and last name: Lloyd Fosdick
Fodsick, L.
```
The user's input may contain extra spaces before the first name, between the first and last names, and after the last name.

**Answer**: Check `pr11.c`.

## Project 12
Write a program that evaluates an expression:
```
Enter an expression: 1+2.5*3
Value of expression: 10.5
```

The operands in the expression are floating-point numbers; the operators are +, -, * and /. The expression is evalued from left to right (no operator taes precedence over any other operator).

**Answer**: Check `pr12.c`.

## Project 13
Write a program that calculates the average word length for a sentence:
```
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
```

For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. Display the average word length to one decimal place.

**Answer**: Check `pr13.c`.

## Project 14
Write a program that uses Newton's method to compute the square root of a positive floating-point number:
```
Enter a positive number: 3
Square root: 1.73205
```

Let `x` be the number entered by the user. Newton's method requires an initial guess `y` for the square root of `x` (we'll use `y = 1`). Successive guesses are found by computing the average of `y` and `x/y`. The following **table** shows how the **square root** of `3` would be found:

|  x  |    y    |   x/y   | Average of y and x/y |
|-----|---------|---------|----------------------|
| 3   | 1       | 3       | 2                    |
| 3   | 2       | 1.5     | 1.75                 |
| 3   | 1.75    | 1.71429 | 1.73214              |
| 3   | 1.73214 | 1.73196 | 1.73205              |
| 3   | 1.73205 | 1.73205 | 1.73205              |


Note that the values of `y` get progressively closer to the true square root of `x`. For greater accuracy, your program should use variable of type `double` rather than `float`. Have the program terminate when the absolute value of the difference between the old value of `y` and the new value of `y` is less then the product of `.00001` and `y`. *Hint*: Call the `fabs` function to find the absolute value of a `double`. (You'll need to include the `<math.h>` header at the beginning of your program in order to use `fabs`.)

**Answer**: Check `pr14.c`.

## Project 15
Write a program that computes the factorial of a positive integer:
```
Enter a positive integer: 6
Factorial of 6: 720
```

(a) Use a `short` variable to store the value of the factorial. What is the largest value of `n` for which the program correctly prints the factorial of `n`?

(b) Repeat part (a), using an `int` variable instead.

(c) Repeat part (a), using a `long` variable instead.

(d) Repeat part (a), using a `long long` variable instead (if your compiler supports the `long long` type.

(e) Repeat part (a), using a `float` variable instead.

(f) Repeat part (a), using a `double` variable instead.

(g) Repeat part (a), using a `long double` variable instead.

In cases (e)-(g), the program will display a close approximation of the factorial, not necessarily the exact value.

**Answer**: Check `pr15.c`.

(a) Use a `short` variable to store the factorial, and determine the largest value of `n`, for which the factorial is correct.
* Answer: 7! = 5040, 8! = -25216
* Wrong: 8! = -25216

(b) What's the largest value of `n`, when the factorial is type `int`?
* Answer: 16! = 2,004,189,184
* Wrong: 17! = -288,522,240

(c) What's the largest value of `n`, when the factorial is type `long`?
* Answer: 20! = 2,432,902,008,176,640,000 
* Wrong: 21! = -4249290049419214848

(d) What's the largest value of `n`, when the factorial is type `long long`?
* Answer: 20! = 2,432,902,008,176,640,000 
* Wrong: 21! = -4249290049419214848

(e) What's the largest value of `n`, when the factorial is type `float`?
* Answer: 34! = 295,232,883,843,762,098,116,370,704,180,633,927,680.000000
* Wrong: 35! = inf

(f) What's the largest value of `n`, when the factorial is type `double`?
* Answer: 170!
* Wrong:  171! = inf

(g) What's the largest value of `n`, when the factorial is type `long double`?
* Answer: 1754!
* Wrong:  1755! = inf
