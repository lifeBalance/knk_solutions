# Chapter 11: Programming projects

## Project 1
Modify Programming Project 7 from Chapter 2 so that it includes the following function:
```c
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
```

The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the `dollars` parameter. The `twenties` parameter points to a variable in which the function will store the number of $20 bills required. The `tens`, `fives` and `ones` parameters are similar.

**Answer**: See `pr01.c`

## Project 2
Modify Programming Project 8 from Chapter 5 so that it includes the following function:
```c
void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);
```

This function wil find the flight whose departure time is closest to `desired_time` (expressed in minutes sinces midnight). It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to by `departure_time` and `arrival_time`, respectively.

**Answer**: See `pr02.c`

## Project 3
Modify Programming Project 3 from Chapter 6 so that it includes the following function:
```c
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);
```

`numerator` and `denominator` are the numerator and denominator of a fraction. `reduced_numerator` and `reduced_denominator` are pointers to variables in which the function will store the numerator and denominator of the fraction once it has been reduced to lowest terms.

**Answer**: See `pr03.c`

## Project 4
Modify the `poker.c` program of Section 10.5 by moving all external variables into `main` and modifying functions so that they communicate by passing arguments. The `analyze_hand` function needs to change the `straight`, `flush`, `four`, `three` and `pairs` variables, so it will have to be passed pointers to those variables.

**Answer**: See `pr04.c`
