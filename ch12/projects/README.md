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
