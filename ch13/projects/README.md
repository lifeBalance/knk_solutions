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

## Project 4
Write a program named `reverse.c` that echoes its command-line arguments in reverse order. Running the program by typing:
```
reverse void and null 
```

should produce the following output:
```
null and void
```

**Answer**: See `reverse.c`.

## Project 5
Write a program named `sum.c` that adds up its command-line arguments, which are assumed to be integers. Running the program by typing:
```
sum 8 24 62
```

should produce the following output:
```
Total: 94
```

*Hint*: Use the `atoi` function to convert each command-line argument from string form to integer form.

**Answer**: See `sum.c`.

## Project 6
Improve the `planet.c` program of Section 13.7 by having it ignore case when comparing command-line arguments with strings in the `planets` array.

**Answer**: See `pr06.c`. It's just a matter of uppercasing the first character of the command-line arguments (line 29).

## Project 7
Modify Programming Project 11 from Chapter 5 so that it uses arrays containing pointers to strings instead of `switch` statements. For example, instead of using a `switch` statement to print the words for the first digit, use the digit as an index into an array that contains the strings `"twenty"`, `"thirty"` and so forth.

**Answer**: See `pr07.c`.

## Project 8
Modify Programming Project 5 from Chapter 7 so that it includes the following function:
```c
int compute_scrabble_value(const char *word);
```

The function returns the SCRABBLE value of the string pointed to by `word`.

**Answer**: See `pr08.c`.

## Project 9
Modify Programming Project 10 from Chapter 7 so that it includes the following function:
```c
int compute_vowel_count(const char *sentence);
```

The function returns the number of vowels in the string pointed to by the `sentence` parameter.

**Answer**: See `pr09.c`.

## Project 10
Modify Programming Project 11 from Chapter 7 so that it includes the following function:
```c
void reverse_name(char *name);
```

The function expects `name` to point to a string containing a first name followed by a last name. It modifies the string so that the last name comes first, followed by a comma, a space, the first initial and a period. The original string may contain extra spaces before the first name, between the first and last names and after the last name.

**Answer**: See `pr10.c`.

## Project 11
Modify Programming Project 13 from Chapter 7 so that it includes the following function:
```c
double compute_average_word_length(const char *sentence);
```

The function returns the average length of the words in the string pointed to by `sentence`.

**Answer**: See `pr11.c`.

## Project 12
Modify Programming Project 14 from Chapter 8 so that it stores the words in a two-dimensional `char` array as it reads the sentence, with each row of the array storing a single word. Assume that the sentence contains no more than 30 words and no word is more than 20 characters long. Be sure to store a null character at the end of each word so that it can be treated as a string.

**Answer**: See `pr12.c`.

## Project 13
Modify Programming Project 15 from Chapter 8 so that it includes the following function:
```c
void encrypt(char *message, int shift);
```

The function expects `message` to point to a string containing the message to be encrypted; `shift` represents the amount by which each letter in the message is to be shifted.

**Answer**: See `pr13.c`.

## Project 14
Modify Programming Project 16 from Chapter 8 so that it includes the following function:
```c
bool are_anagrams(const char *word1, const char *word2);
```

The function returns `true` if the strings pointed to by `word1` and `word2` are anagrams.

**Answer**: See `pr14.c`.

## Project 15
Modify Programming Project 6 from Chapter 10 so that it includes the following function:
```c
int evaluate_RPN_expression(const char *expression);
```

The function returns the value of the RPN expression pointed to by `expression`.

**Answer**: See `pr15.c`.
