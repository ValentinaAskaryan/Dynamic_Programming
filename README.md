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
- **Memoization (Top-Down):**<br>
Uses recursion and a cache to store results of subproblems.
- **Tabulation (Bottom-Up):**<br>
Uses an iterative loop to build the result from the ground up.


### **Compare the solutions**

**Recursive**<br>
Calculated the operation time with nanoseconds:<br>
Ex. n = 5
Nanoseconds = 25313

Ex. n = 35
Nanoseconds = 28359

**Iterative**<br>
Calculated the operation time with nanoseconds:<br>
Ex. n = 5
Nanoseconds = 25631

Ex. n = 35
Nanoseconds = 24139

***As we can see the iterative approach is better.***


## **Problem 2:** Factorial
The **Factorial function** is a classic example of a problem that can be efficiently solved using **dynamic programming**.
Calculating F(n) involves a lot of repeated work. To optimize this, we use **memoization (top-down)** or **tabulation (bottom-up)** techniques to store and reuse results of subproblems.

### **Problem Statement**
Given a non-negative integer n, compute the factorial of n, denoted as n!.

The factorial of a number is defined as:
n! = n × (n−1) × (n−2) × ... × 1   for n > 0
0! = 1   (by definition)

### **Approach**
- **Memoization (Top-Down):**<br>
Uses recursion and a cache to store results of subproblems.
- **Tabulation (Bottom-Up):**<br>
Uses an iterative loop to build the result from the ground up.


### **Compare the solutions**
Unlike the **Fibonacci problem**, the **factorial function** does not involve overlapping subproblems. Each value from n down to 1 is computed once in a strict sequence.
Therefore, using **dynamic programming techniques** like **memoization** provides little to no performance benefit for calculating factorials.
The iterative approach is typically preferred due to its simplicity and lack of recursion-related overhead.

## **Problem 3:** Climbing Stairs
The **Climbing Stairs** is a classic example of a problem that can be efficiently solved using **dynamic programming**.
Calculating F(n) involves a lot of repeated work. To optimize this, we use **memoization (top-down)** or **tabulation (bottom-up)** techniques to store and reuse results of subproblems.

### **Problem Statement**
You are climbing a staircase that has n steps. Each time you can either:

- take 1 step, or

- take 2 steps.

The goal is to find how many distinct ways you can climb to the top of the staircase.

### **Approach**
- **Memoization (Top-Down):**<br>
Uses recursion and a cache to store results of subproblems.
- **Tabulation (Bottom-Up):**<br>
Uses an iterative loop to build the result from the ground up.


### **Solution**

*Enter stairs count:* 30
*Options:* 2178309
*Time with nanoseconds:* 23352


## **Problem 4:** Grid Unique Paths
The **Grid Unique Paths** is a classic example of a problem that can be efficiently solved using **dynamic programming**.
Calculating F(n) involves a lot of repeated work. To optimize this, we use **memoization (top-down)** or **tabulation (bottom-up)** techniques to store and reuse results of subproblems.

### **Problem Statement**
You are given a grid of size m × n (for example, 4 rows and 5 columns). Starting from the top-left corner of the grid, you want to reach the bottom-right corner.

You can only move in two directions:

- Right →

- Down ↓

The goal is to count how many unique paths exist from the starting cell to the destination.

### **Approach**
- **Memoization (Top-Down):**<br>
Uses recursion and a cache to store results of subproblems.
- **Tabulation (Bottom-Up):**<br>
Uses an iterative loop to build the result from the ground up.


### **Solution**

*Enter the row count:* 4
*Enter the col count:* 5
*Total paths:* 35

1 1 1 1 1<br> 
1 2 3 4 5 <br>
1 3 6 10 15 <br>
1 4 10 20 35 

*Time with nanoseconds:* 40964

