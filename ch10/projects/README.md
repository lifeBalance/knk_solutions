# Chapter 10: Projects

## Project 1
Modify the stack example of Section 10.2 so that it stores characters instead of integers. Next, add a `main` function that asks the user to enter a series of parentheses and/or braces, then indicates whether or not they're properly nested:
```
Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly
```

*Hint*: As the program reads characters, have it push each left parenthesis or left brace. When it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a matching parenthesis or brace. (If not, the parentheses/braces aren't nested properly.) When the program reads the new-line character, have it check whether the stack is empty; if so, the parentheses/braces are matched. If the stack *isn't* empty (or if `stack_underflow` is ever called), the parentheses/braces aren't matched. If `stack_overflow` is called, have the program print the message `Stack overflow` and terminate immediately.

**Answer**: Check `pr01.c`.

## Project 2
Modify the `poker.c` program of Section 10.5 by moving the `num_in_rank` and `num_in_suit` arrays into `main`, which will pass them as arguments to `read_cards` and `analyze_hand`.

**Answer**: Check `pr02.c`.

## Project 3
Remove the `num_in_rank`, `num_in_suit` and `card_exists` arrays from the `poker.c` program of Section 10.5. Have the program store the cards in a 5 x 2 array instead. Each row of the array will represent a card. For example, if the array is named `hand`, then `hand[0][0]` will store the rank of the first card and `hand[0][1]` will store the suit of the first card.

**Answer**: Check `pr03.c`.

## Project 4
Modify the `poker.c` program of Section 10.5 by having it recognize an additional category, "royal flush" (ace, king, queen, jack, ten of the same suit). A royal flush ranks higher than all other ranks.

**Answer**: Check `pr04.c`.
