# Magic-Square-Solver
This project implements a solution to determine if a given grid can form a magic square and attempts to fill in missing values to create one. A magic square is defined as a grid of numbers where the sums of every row, column, and both main diagonals are equal.

- **Magic Square Validation**: Checks if a provided square is already a magic square.
- **Recursive Solving**: Attempts to fill in missing values (denoted as 0) in the grid to form a magic square.
- **Box Validation**: Ensures each number from 1 to n² appears exactly once in the grid.

# Input format
   - The program expects the size of the square (`n`) and the grid values, where a `0` indicates an empty cell.

# functions
- `bubblesort()`: Sorts an array for validation of unique numbers in the magic square.
- `arraychecker()`: Checks if an array contains the numbers 1 to n².
- `boxchecker()`: Validates if all boxes in the grid contain unique numbers.
- `check()`: Validates if the current grid is a magic square.
- `magic()`: Recursively fills in the grid to find a valid magic square.
- `main()`: Handles input and output, calls the `magic()` function.
