# Chapter 5: Programming projects

## Project 1
Write a program that calculates how many digits a number contains:
```
Enter a number: 374
The number 374 has 3 digits
```

You many assume that the number has no more than four digits. *Hint*: Use `if` statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.

**Answer**: Check `pr01.c`. I also considered the negative numbers scenario.

## Project 2
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
```
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
```

Be careful not to display 12:00 as 0:00.

**Answer**: Check `pr02.c`.

## Project 3
Modify the `broker.c` program of Section 5.2 by making both of the following changes:

(a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.

(b) Add statements that compute the commission charged by a rival broker ($33 plus 3 cents per share fewer than 2000 shares; $33 plus 2 cents per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker.

**Answer**: Check `pr03.c`.

## Project 4
Here's a simplified version of the Beaufort scale, which is used to estimate wind force:
```
Speed (knots)	Description
Less than 1 	Calm
1-3 			Light air
4-27 			Breeze
28-47 			Gale
48-63 			Storm
Above 63 		Hurricane
```

Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.

**Answer**: Check `pr04.c`.

## Project 5
In one state, single residents are subject to the following income tax:
```
Income 				Amount of tax 	
Not over $750 		1% of income 	
$750-$2,250 		$7.50 	plus 2% of amount over $750
$2,250-$3,750 		$37.50 	plus 3% of amount over $2,250
$3,750-$5,250 		$82.50 	plus 4% of amount over $3,750
$5,250-$7,000 		$142.50 plus 5% of amount over $5,250
Over $7,000 		$230.00 plus 6% of amount over $7,000
```

Write a program that asks the user to enter the amount of taxable income, then displays the tax due.

**Answer**: Check `pr05.c`.

## Project 6
Modify the `upc.c` program of Section 4.1 so that it checks whether a UPC is valid. After the users enters a UPC, the program will display either `VALID` or `NOT VALID`.

**Answer**: Check `pr06.c`.

## Project 7
Write a program that finds the largest and smallest of four integers entered by the user:
```
Enter four integers: 21 42 10 35
Largest: 43
Smallest: 10
```

Use as few `if` statements as possible: *Hint*: Four `if` statements are sufficient.

**Answer**: Check `pr07.c`.

## Project 8
The following table shows the daily flights from one city to another:
```
Departure time 		Arrival time
8:00 a.m. 			10:16 a.m.
9:43 a.m. 			11:52 a.m.
11:19 a.m. 			1:31 p.m.
12:47 p.m. 			3:00 p.m.
2:00 p.m. 			4:08 p.m.
3:45 p.m. 			5:55 p.m.
7:00 p.m. 			9:20 p.m.
9:45 p.m. 			11:58 p.m.
```

Write a program that asks the user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
```
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```

*Hint*: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, 13:15 is `13 * 60 + 15 = 795` minutes since midnight, which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.

**Answer**: Check `pr08.c`.

## Project 9
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:
```
Enter first date (mm/dd/yyyy): 3/6/08
Enter second date (mm/dd/yyyy): 5/17/07
5/17/07 is earlier than 3/6/08
```

**Answer**: Check `pr09.c`.

## Project 10
Using the `switch` statement, write a program that converts a numerical grade into a letter grade:
```
Enter numberical grade: 84
Letter grade: B
```

Use the following grading scale: `A = 90-100`, `B = 80-89`, `C = 70-79`, `D = 60-69`, `F = 0-59`. Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade into two digits, then use a `switch` statement to test the ten's digit.

**Answer**: Check `pr10.c`.

## Project 11
Write a program that asks the user for a two-digit number, then prints the English word for the number:
```
Enter a two-digit number: 45
You entered the number forty-five.
```

*Hint*: Break the number into two digits. Use one `switch` statement to print the word for the first digit ("twenty," "thirty," and so forth). Use a second `switch` statement to print the word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment.

**Answer**: Check `pr11.c`.
