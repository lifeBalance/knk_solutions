# Chapter 15: Exercises

## Exercise 1
Section 15.1 listed several advantages of dividing a program into multiple source files.

(a) Describe several other advantages.  
(b) Describe some disadvantages.

**Answer**:

(a) Some **advantages** of multi-file programs are:

* The structure of the program is easier to understand just by looking at the files, since every file contains group of related functions and variables.
* It saves development time, since we only have to compile those source files that are modified during the process.
* If facilitates code reuse, since we could drop source files in other projects.

(b) Main **disadvantage** is added complexity, especially if the number of files grows disproportionately.

## Exercise 2
Which of the following should *not* be put into a header file? Why not?

(a) Function prototypes
(b) Function definitions
(c) Macro definitions
(d) Type definitions

**Answer**: Function definitions should never go on a header file; if a header is included in several source files, we'll get an error when the **linker** discover two identical copies of the object code for that function.

## Exercise 3
We saw that writing `#include <file>` instead of `#include "file"` may not work if `file` is one that we've written. Would there by any problem with writing `#include "file"` instead of `#include <file>` if `file` is a system header?

**Answer**: When the header filename is enclosed in **double quotes**, the following places are searched for:

* The **current directory**.
* The **default directory** where **system headers** reside.

So if we use **double quotes**, when the system is not found in the current directory, the default folder for system headers will be searched, and the header will be found there. So yes, it'll work.

## Exercise 4
Assume that `debug.h` is a header file with the following contents:
```c
#ifdef DEBUG
#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
#else
#define PRINT_DEBUG(n)
#endif
```

Let `testdebug.c` be the following source file:
```c
#include <stdio.h>

#define DEBUG
#include "debug.h"

int main(void)
{
    int i = 1, j = 2, k = 3;

#ifdef DEBUG
    printf("Output if DEBUG is defined:\n");
#else
    printf("Output if DEBUG is not defined:\n");
#endif

    PRINT_DEBUG(i);
    PRINT_DEBUG(j);
    PRINT_DEBUG(k);
    PRINT_DEBUG(i + j);
    PRINT_DEBUG(2 * i + j - k);

    return 0;
}
```

(a) What is the output when the program is executed?

(b) What is the output if the `#define` directive is removed from `testdebug.c`?

(c) Explain why the output is different in parts (a) and (b).

(d) Is it necessary for the `DEBUG` macro to be defined *before* `debug.h` is included in order for `PRINT_DEBUG` to have the desired effect? Justify your answer.

**Answer**: Check files in the `ex04` folder.

(a) The output:
```
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
```

(b) If we remove the `#define` directive, the macro `DEBUG` will cease to be defined, and the **parameterized macro** `PRINT_DEBUG(n)` will be an **empty macro**, meaning that it will expand to **nothing**; the output would be:
```
Output if DEBUG is not defined:
```

(c) The difference is that the definition of the parameterized macro `PRINT_DEBUG(n)` depends on the definition of another macro (`DEBUG`); if the latter is not defined, the former will be defined as an **empty** macro, and will expand to **empty string**.

(d) Yes, it is necessary that the macro `DEBUG` is defined **before** that the header is **included**, since the include directive literally includes the contents of the header at the location of the ``#include`` directive; if the macro `DEBUG` is not defined by that point, the `#ifdef` inside the *header* will evaluate to **false**.

## Exercise 5
Suppose that a program consists of three source files -- `main.c`, `f1.c` and `f2.c` -- plus two header files, `f1.h` and `f2.h`. All three source files include `f1.h`, but only `f1.c` and `f2.c` include `f2.h`. Write a makefile for this program, assuming that the compiler is `gcc` and that the executable file is to be named `demo`.

**Answer**: Check `Makefile` in the `ex05` folder.
