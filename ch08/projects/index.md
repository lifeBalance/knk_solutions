# Chapter 8: Programming projects

## Project 1
Modify the ``repdigit.c`` program of **Section 8.1** so that it shows which digits (if any) were repeated:
```
Enter a number: 939577
Repeated digit(s): 7 9
```
**Answer**: Check ``pr01.c``

## Project 2
Modify the ``repdigit.c`` program of **Section 8.1** so that it prints a table showing how many times each digit appears in the number:
```
Enter a number: 41271092
Digit:        0 1 2 3 4 5 6 7 8 9
Occurrences:  1 2 2 0 1 0 0 1 0 1
```
**Answer**: Check ``pr02.c``

## Project 3
Modify the `repdigit.c` program of **Section 8.1** so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0.

**Answer**: Check ``pr03.c``

## Project 4
Modify the `reverse.c` program of **Section 8.1** to use the expression `(int) (sizeof(a) / sizeof(a[0]))` (or a **macro** with this value for the array length.

**Answer**: Check ``pr04.c``

## Project 5
Modify the `interest.c` program of **Section 8.1** so that it compound interest monthly instead of annually. The form of the output shouldn't change: the balance should still be shown at annual intervals.

**Answer**: Check ``pr05.c``

## Project 6
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing messages. Here's a typical BIFF communiqué:
```
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-speak:
```
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Your program should convert the message to upper-case letters, substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks. *Hint*: Store the original message in an array of characters, then go back through the array, translating and printing characters one by one.

**Answer**: Check `pr06.c`

## Project 7
Write a program that reads a **5 x 5** array of integers and then prints the row sums and the column sums:

```
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
```

**Answer**: Check `pr07.c`

## Project 8
Modify **Programming Project 7** so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz.


**Answer**: Check `pr08.c`

## Project 9
Write a program that generates a "random walk" across a **10 x 10** array. The array will contain characters (all '.' initially). The program must randomly "walk" from element to element, always going up, down, left or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited. Here's an example of the desired output:
```
A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .
```

*Hint* Use the srand and rand functions (see `deal.c`) to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for the remainder -- 0, 1, 2 and 3 -- indiciating the direction of the next move. Before performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, thr program must terminate. Here's an example of premature termination:
```
A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
```

Y is blocked on all four sides, so there's no place to put Z.

**Answer**: Check `pr09.c`

## Project 10
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. (The times are integers, representing the number of minutes since midnight.) The program will use a loop to search the array of departure times for the one closest to the time entered by the user.

**Answer**: Check `pr10.c`

## Project 11
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
```
Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
```

The program will need to store the phone number (either in its original form or in its numeric form) in an array of characters until it can be printed. You may assume that the phone number is no more than 15 characters long.

**Answer**: Check `pr11.c`. My solution stores the **newline** character at the **15th position** (index ``14``); when printing there's no need for adding a newline at the end of the phone number.

## Project 12
Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the letters are stored in an array. The array wil have 26 elements, corresponding to the 26 letters of the alphabet. For example, element 0 of the array will store 1 (because the SCRABBLE value of the letter A is 1), element 1 of the array will store 3 (because the SCRABBLE value of the letter B is 3) and so forth. As each character of the input word is read, the program will use the array to determine the SCRABBLE value of that character. Use an array initializer to set up the array.

**Answer**: Check `pr12.c`. 

## Project 13
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
```
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
```

The program will need to store the last name (but not the first name) in an array of characters until it can be printed. You may assume that the last name is no more than 20 characters long.

## Project 14
Write a program that reverses the words in a sentence:
```
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
```

*Hint*: Use a loop to read the characters one by one and store them in a one-dimensional `char` array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"), which is saved in a separate `char` variable. Then use a second loop to search backward through the array for the beginning of the last word. Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached. Finally, print the terminating character.

## Project 15
One of the oldest known encrpytion techniques in the Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go past the letter Z, the cipher "wraps around" to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, the *Y* would be replaced by *A*, and *Z* would be replaced by *B*.) Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):
```
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.
```

Notice that the program can decrypt a message if the user enters 26 minus the original key:
```
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.
```

You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case. *Hint*: To handle the
wrap-around problem, use the expression `((ch - 'A') + n % 26 + 'A'` to calculate the encrypted version of an upper-case letter, where `ch` stores the letter and `n` stores the shift amount. (You'll need a similar expression for
lower-case letters.)

## Project 16
Write a program that test whether two words are anagrams (permutations of the same letters):
```
Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
```

Write a loop that reads the first word, character by character, using an array of 26 integers to keep track of how many times each letter has been seen. (For example, after the word *smartest* has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact that *smartest* contains one *a*, one *e*, one *m*, one *r*, two *s*'s and two *t*'s.) Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. Both loops should ignore any characters that aren't letters, and bth should treat upper-case letters in the same way as lower-case letters. After the second word has been read, use a third loop to check whether all the elements in the array are zero. If so, the words are anagrams. *Hint*: You may wish to use the functions from `<ctype.h>`, such as `isalpha` and `tolower`.
