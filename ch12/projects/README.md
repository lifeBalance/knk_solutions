# Chapter 12: Projects

## Project 1
(a) Write a program that reads a message, then prints the reversal of the message:
```
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
```

*Hint*: Read the message one character at a time (using `getchar`) and store the characters in an array. Stop reading when the array is full or the character read is `'\n'`.

 (b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array.

**Answer**: Check `pr01a.c` and `pr01b.c` for both versions.

## Project 2
(a) Write a program that reads a message, then checks whether it's a palindrome (the letters in the message are the same from left to right as from right to left):
```
Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome
```

Ignore all characters that aren't letters. Use integer variables to keep track of positions in the array.

 (b) Revise the program to use pointers instead of integers to keep track of positions in the array.

**Answer**: Check `pr02a.c` and `pr02b.c` for both versions.

## Project 3
Simplify Programming Project 1(b) by taking advantage of the fact that an array name can be used as a pointer.

**Answer**: Check `pr01b.c` to see it in action. I already used the array name as a pointer.

## Project 4
Simplify Programming Project 2(b) by taking advantage of the fact that an array name can be used as a pointer.

**Answer**: Check `pr02b.c` to see it in action. I already used the array name as a pointer.

## Project 5
Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.

**Answer**: Check `pr05.c` to see it in action.

## Project 6
Modify the `qsort.c` program of Section 9.6 so that `low`, `high` and `middle` are pointers to array elements rather than integers. The `split` function will need to return a pointer, not an integer.

**Answer**: Check `pr06.c` to see it in action.

## Project 7
Modify the `maxmin.c` program of Section 11.4 so that the `max_min` function uses a pointer instead of an integer to keep track of the current position in the array.

**Answer**: Check `pr07.c` to see it in action.
