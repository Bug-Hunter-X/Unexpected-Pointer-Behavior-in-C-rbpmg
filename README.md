# Unexpected Pointer Behavior in C
This repository demonstrates a subtle issue related to pointer manipulation in C. The `bug.c` file contains code that exhibits unexpected behavior when modifying values through multiple pointers that point to the same memory location. The `bugSolution.c` file provides a corrected version of the code with an explanation of the issue. 

## Problem Description
The primary issue is that while direct changes to memory location using pointers usually propagate correctly, assigning a pointer to another and manipulating the new pointer doesn't reliably reflect back on the original pointer. 

## Solution
Understanding the direct and indirect way of pointer manipulation will help resolve the issue.

## How to run
1. Clone the repository.
2. Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the executable:
   ```bash
   ./bug
   ./bugSolution
   ```