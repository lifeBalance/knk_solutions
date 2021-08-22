# Chapter 10: Exercises

## Exercise 1
The following program outline shows only function definitions and variable declarations.
```c
int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope:

(a) The `f` function

(b) The `g` function

(c) The block in which `e` is declared  

(d) The `main` function

**Answer**:

(a) The `f` function: The **global variable** `a`, the **parameter** `b`, and the **local variable** `c`.

(b) The `g` function: The **global variable** `a`, and the **locals** `d` and `e`.

(c) The block in which `e` is declared: the **global variable** `a`, `d` which is in the **outer block**, and the **local** `d`.

(d) The `main` function: The **global variable** `a`, and the **local variable** `f`.

## Exercise 2
The following program outline shows only function definitions and variable declarations.
```c
int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope. If there's more than one variable or parameter with the same name, indicate which one is visible. 

(a) The `f` function: 

(b) The `g` function

(c) The block in which `a` and `d` are declared  

(d) The `main` function

**Answer**:

(a) The `f` function: The **global variables** `c` and the **locals** `b` and `d` (the local `b` shadows the visibility of the global `b`).

(b) The `g` function: The **global variables** `b` and the **locals** `c`, `a` and `d` (the local `c` shadows the visibility of the global `c`). Also the **parameter** `a` is visible out of the block, and overshadowed inside the block.

(c) The block in which `a` and `d` are declared: The **global variable** `b`, the `c` in the outer block, plus `a` and `d` themselves (inside the block, the local `a` overshadows the parameter `a`).

(d) The `main` function: The **global variable** `b`, and the **local variables** `c` and `d`; the global `c` is overshadowed by the local `c`.

## Exercise 3
Suppose that a program has only one function (`main`). How many different variables names `i` could this program contain?

**Answer**: As many as we want, since we can have a variable named `i` in each block (and there's no limit to the amount of blocks a program can contain). Note that the outer `i` variables will be overshadowed by the inner `i`.
