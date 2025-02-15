# Competitive Programming Template

This repository contains a basic C++ template designed for competitive programming. It includes macros, utility functions, and fast I/O setup to simplify and speed up coding during contests.

## Key Features

1. **Fast I/O:**
   - `ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);`
     - Ensures faster input/output operations by disabling synchronization with C I/O streams and unlinking `cin` and `cout`.

2. **Helpful Macros:**
   - **Mathematical Operations:**
     - `ceil(n, m)`: Returns the ceiling of `n / m`.
     - `add_mod(a, b, m)`, `sub_mod(a, b, m)`, `mul_mod(a, b, m)`: Perform modular addition, subtraction, and multiplication.
   - **Vector Utilities:**
     - `all(vec)`, `rall(vec)`: Simplify passing iterators for sorting or other operations.
   - **Looping:**
     - `FOR(i, n)`: Standard loop from 0 to `n - 1`.
     - `FORREV(i, n)`: Reverse loop from `n - 1` to 0.
   - **Miscellaneous:**
     - `debug(x)`, `deb2(x, y)`: For quick debugging by printing variable names and their values.

3. **Utility Functions:**
   - `gcd(a, b)`: Computes the greatest common divisor.
   - `lcm(a, b)`: Computes the least common multiple.

4. **Ready-to-Use Solve Function:**
   - The `Solve()` function serves as a placeholder for your solution logic, easily adaptable to handle multiple test cases.

## VS-Code Snippet

Find the vs-code snippet in `snippet.json`