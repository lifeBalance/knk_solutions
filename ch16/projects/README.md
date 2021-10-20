# Chapter 16: Projects

## Project 1
Write a program that asks the user to enter an international dialing code and then looks it up in the `country_codes` array (see Section 16.3). If it finds the code, the program should display the name of the corresponding country; if not, the program should print an error message.

**Answer**: Check `pr01.c`.

## Project 2
Modify the `inventory.c` program of Section 16.3 so that the `p` (print) operation displays the parts sorted by part number.

**Answer**: Check the `pr02` folder.

## Project 3
Modify the `inventory.c` program of Section 16.3 by making `inventory` and `num_parts` local to the `main` function.

**Answer**: Check the `pr03` folder.

## Project 4
Modify the `inventory.c` program of Section 16.3 by adding a `price` member to the `part` structure. The `insert` function should ask the user for the price of a new item. The `search` and `print` functions should display the price. Add a new command that allows the user to change the price of a part.

**Answer**: Check the `pr04` folder.

## Project 5
Modify Programming Project 8 from Chapter 5 so that the times are stored in a single array. The elements of the array will be structures, each containing a departure time and the corresponding arrival time (Each time will be an integer, representing the number of minutes since midnight). The program will use a loop to search the array for the departure time closest to the time entered by the user.

**Answer**: Check `pr05.c`.

## Project 6
Modify Programming Project 9 from Chapter 5 so that each date entered by the user is stored in a `date` structure (see Exercise 5). Incorporate the `compare_dates` function of Exercise 5 into your program.

**Answer**: Check `pr06.c`.
