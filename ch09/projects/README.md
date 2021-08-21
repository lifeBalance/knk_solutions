# Chapter 9: Projects

## Project 1
Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function `selection_sort`. When given an array with `n` elements, `selection_sort` must do the following:

1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first `n - 1` elements of the array.

**Answer**: Check `pr01.c` to see the Selection Sort algorithm implemented; this version of the algorithm works by putting the largest element the last, and then calling recursively the function shortening the array from the right.
Another version consists in putting the smallest element to the left, and call recursively shortening the array from the left.

## Project 2
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the amount of income tax. When passed an amount of taxable income, the function will return the tax due.

**Answer**: Check `pr02.c`.

## Project 3
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
```c
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
```

`main` first calls `generate_random_walk`, which initializes the array to contain `'.'` characters and then replaces some of these characters by the letters `A` through `Z`, as described in the original project. `main` then calls `print_array` to display the array on the screen.

**Answer**: Check `pr03.c`.

## Project 4
Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
```c
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
```

`main` will call `read_word` twice, once for each of the two words entered by the user. As it reads a word, `read_word` will use the letters in the word to update the `counts` array, as described in the original project. (`main` will declare two arrays, one for each word. These arrays are used to track how many times each letter occurs in the words.) `main` will then call `equal_array`, passing it the two arrays. `equal_array` will return `true` if the elements in the two arrays are identical (indicating that the words are anagrams) and `false` otherwise.

**Answer**: Check `pr04.c`.

## Project 5
Modify Programming Project 17 from Chapter 8 so that it includes the following
functions:
```c
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
```

After obtaining the number `n` from the user, `main` will call `create_magic_square`, passing it an `n x n` array that is declared inside `main`. `create_magic_square` will fil the array with the numbers 1, 2, ..., *n*² as described in the original project. `main` will then call `print_magic_square`, which will display the array in the format described in the oroginal project. *Note*: If your compiler doesn't support variable-length arrays, declare the array in `main` to be 99 x 99 instead of *n* x *n* and use the following prototypes instead:
```c
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
```

**Answer**: Check `pr05.c`.

## Project 6
Write a function that computes the value of the following polynomial:

3x<sup>5</sup> + 2x<sup>4</sup> - 5x<sup>3</sup> - x² + 7x - 6

Write a program that asks the user to enter a value for `x`, calls the function to compute the value of the polynomial, and then displays the value returned by the function.

**Answer**: Check `pr06.c`.

## Project 7
The `power` function of Section 9.6 can be made faster by having it calculate x<sup>n</sup> in a different way. We first notice that if `n` is a power of 2, then x<sup>n</sup> can be computed by squaring. For example, x<sup>4</sup> is the square of x<sup>2</sup>, so x<sup>4</sup> can be computed using only two multiplications instead of three. As it happens, this technique can be used even when `n` is not a power of 2. If `n` is **even** we use the formula x<sup>n</sup> = (x<sup>n/2</sup>)<sup>2</sup>. If `n` is **odd**, then x<sup>n</sup> = x * x<sup>n-1</sup>. Write a recursive function that computes x<sup>n</sup>. (The recursion ends when `n = 0`, in which case the function returns 1.) To test your function, write a program that asks the user to enter values for `x` and `n`, calls `power` to compute x<sup>n</sup>, and then displays the value returned by the function.

**Answer**: Check `pr07.c`.

## Project 8
Write a program that simulates the game of craps, which is played with two dice. On the first roll, the player winds if the sum of the dice is 7 or 11. The player loses if the sum is 2, 3 or 12. Any other roll is called the "point" and the game continues. On each subsequent roll, the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll is ignored and the game continues. At the end of each game, the program will ask the user whether or not to play again. When the user enters a response other than `y` or `Y`, the program will display the number of wins and losses then terminate.
```
You rolled: 8
Your point is 8
You rolled: 3
You rolled: 10
You rolled: 8
You win!

Play again? y

You rolled: 6
Your point is 6
You rolled: 5
You rolled: 12
You rolled: 3
You rolled: 7
You lose!

Play again? y

You rolled: 11
You win!

Play again? n

Wins: 2  Losses: 1
```

Write your program as three functions: `main`, `roll_dice` and `play_game`. Here are the prototypes for the latter two functions:
```c
int roll_dice(void);
bool play_game{void);
```

`roll_dice` should generate two random numbers, each between 1 and 6, and return their sum. `play_game` should play one craps game (calling `roll_dice` to determine the outcome of each dice roll); it will return `true` if the player wins and `false` if the player loses. `play_game` is also responsible for displaying messages showing the results of the player's dice rolls. `main` will call `play_game` repeatedly keeping track of the number of wins and losses and displaying the "you win" and "you lose" messages. *Hint*: Use the `rand`
function to generate random numbers. See the `deal.c` program in Section 8.2 for an example of how to call `rand` and the related `srand` function.

**Answer**: Check `pr08.c`.
