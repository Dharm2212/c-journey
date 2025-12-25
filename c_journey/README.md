# Variable Modifiers in C – static, extern, scope

This folder demonstrates how C variables behave across multiple source files
using `static`, `extern`, and normal local/global scope.

These examples are very important for embedded systems and low-level
programming interviews.

---

## Files in this folder

| File | Description |
|------|-------------|
| main.c | Calls the function defined in add.c |
| add.c | Contains a `static` variable and the function definition |
| Auto_Extern.c | Demonstrates behavior of auto and extern variables |
| Local_vs_Global.c | Demonstrates local vs global variable scope |

---

## Example: Static variable across files

### How it works

- `main.c` calls `function()` three times.
- `add.c` has a `static` variable that retains its value between calls.
- The static variable is **not accessible** from other files.

---

## How to Compile

Open a terminal inside this folder and run:

gcc main.c add.c -o test

Then execute:

test

---

## Expected Output

3

This proves that `static` variables:
- Retain their value between multiple function calls
- Are not visible outside the file where they are defined
