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
