# Dynamic_Programming
**Dynamic Programming (DP)** is a problem-solving technique used to solve complex problems by breaking them down into smaller overlapping subproblems. Instead of solving the same subproblem repeatedly, DP stores the result of each subproblem in memory (usually a table or array), reusing those results to avoid redundant computation.
In this reposotory you can find many problems connected to this approach.

## **Problem 1:** Fibonacci
The **Fibonacci sequence** is a classic example of a problem that can be efficiently solved using **dynamic programming**.
Calculating F(n) involves a lot of repeated work. To optimize this, we use **memoization (top-down)** or **tabulation (bottom-up)** techniques to store and reuse results of subproblems.

### **Problem Statement**
Given a number n, compute the n-th Fibonacci number:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) for n ≥ 2

### **Approach**
-**Memoization (Top-Down):**
Uses recursion and a cache to store results of subproblems.
-**Tabulation (Bottom-Up):**
Uses an iterative loop to build the result from the ground up.



