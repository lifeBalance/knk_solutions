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

## Project 5
Modify the `poker.c` program of Section 10.5 by allowing "ace-low" straights (ace, two, three, four, five).

**Answer**: Check `pr05.c`.

## Project 6
Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical expressions known as Reverse Polish Notation (RPN). In this notation, operators are placed *after* their operands instead of *between* their operands. For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands in an expression from left to right, performing the following actions:

1. When an operand is encountered, push it onto the stack.
2. When an operator is encountered, pop its operands from the stack, perform the operation on those operands and then push the result onto the stack.

Write a program that evaluates RPN expressions. The operands will be single-digit integers, The operators are `+`, `-`, `*`, `/`, and `=`. The `=` operator causes the top stack item to be displayed; afterwards, the stack is
cleared and the user is prompted to enter another expression. The process continues until the user enters a character that is not an operator or operand:
```
Enter an RPN expression: 1 2 3 * + =
Value of expression: 7
Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8
Enter an RPN expression: q
```

If the stack overflows, the program will display the message `Expression is too complex` and terminate. If the stack underflows (because of an expression such as 1 2 + +), the program will display the message `Not enough operands in expression` and terminate. *Hints*: Incorporate the stack code from Section 10.2 into your program. Use `scanf(" %c", &ch)` to read the operators and operands.

**Answer**: Check `pr06.c`.
