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
