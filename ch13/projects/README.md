# Chapter 13: Projects

## Project 1
Write a program that finds the "smallest" and "largest" in a series of words. After the user enters the words, the program will determine which words would come first and last if the words were listed in dictionary order. The program must stop accepting input when the user enters a four-letter word. Assume that no word is more than 20 letters long. An interactive session with the program might look like this:
```
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra
```

*Hint*: Use two strings named `smallest_word` and `largest_word` to keep track of the "smallest" and "largest" words entered so far. Each time the user enters a word, use `strcmp` to compare it with `smallest_word`; if the new word is "smaller", use `strcpy` to save it in `smallest_word`. Do a similar comparison with `largest_word`. Use `strlen` to determine when the user has entered a four-letter word.

**Answer**: See `pr01.c`.

## Project 2
Improve the `remind.c` program of Section 13.5 in the following ways:

(a) Have the program print an error message and ignore a remainder if the corresponding day is negative or larger than 31. *Hint*: Use a `continue` statement.

(b) Allow the user to enter a day, a 24-hour time and a reminder. The printed reminder list should be sorted first by day, then by time. (The original program allows the user to enter a time, but it's treated as part of the reminder.)

(c) Have the program print a one-*year* reminder list. Require the user to enter the days in the form *month/day*.

**Answer**: See `pr02.c`.

(a) See lines 39 to 43.

(b) See lines 36 and 49 to 56.

(c) No idea what it means to print a one-year list (year was not required) but I implemented the month/day format.

## Project 3
Modify the `deal.c` program of Section 8.2 so that it prints the full names of the cards it deals:
```
Enter number of cards in hand: 5
You hand:
Seven of clubs
Two of spades
Five of diamonds
Ace of spades
Two of hearts
```

*Hint*: Replace `rank_code` and `suit_code` by arrays containing pointers to strings.

**Answer**: See `pr03.c`.
