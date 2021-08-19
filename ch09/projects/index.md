# Chapter 9: Projects

## Project 1
Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function `selection_sort`. When given an array with `n` elements, `selection_sort` must do the following:

1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first `n - 1` elements of the array.

**Answer**: Check `pr01.c` to see the Selection Sort algorithm implemented; this version of the algorithm works by putting the largest element the last, and then calling recursively the function shortening the array from the right.
Another version consists in putting the smallest element to the left, and call recursively shortening the array from the left.

## Project 2
