# Chapter 11: Programming projects

## Project 1
Modify Programming Project 7 from Chapter 2 so that it includes the following function:
```c
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
```

The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the `dollars` parameter. The `twenties` parameter points to a variable in which the function will store the number of $20 bills required. The `tens`, `fives` and `ones` parameters are similar.

## Project 2
Modify Programming Project 8 from Chapter 5 so that it includes the following function:
```c
void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);
```

This function wil find the flight whose departure time is closest to `desired_time` (expressed in minutes sinces midnight). It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to by `departure_time` and `arrival_time`, respectively.
