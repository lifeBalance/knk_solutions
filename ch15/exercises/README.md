# Chapter 15: Exercises

## Exercise 1
Section 15.1 listed several advantages of dividing a program into multiple
source files.

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
