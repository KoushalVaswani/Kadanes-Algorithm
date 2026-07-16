# Kadane's Algorithm

A clean, efficient implementation of **Kadane's Algorithm** in both **C++** and **Python** to solve the Maximum Subarray Sum problem.

---

## 🚀 Overview

Kadane's Algorithm is an iterative dynamic programming algorithm used to find the maximum sum of a contiguous subarray within a one-dimensional array of numbers. 

### Complexity
* **Time Complexity:** $O(n)$ — It scans the entire array exactly once.
* **Space Complexity:** $O(1)$ — It uses a constant amount of extra memory.

---

## 📁 Repository Structure

* `Kadane's.cpp` - Implementation of the algorithm in C++.
* `Kadane's.py` - Implementation of the algorithm in Python.

---

## 💡 How It Works

The algorithm maintains a running sum of the current subarray and tracks the maximum sum found so far:

1. Initialize `max_so_far` with the first element (or a very small number) and `max_ending_here` as `0`.
2. Loop through each element of the array.
3. Add the current element to `max_ending_here`.
4. If `max_ending_here` becomes greater than `max_so_far`, update `max_so_far`.
5. If `max_ending_here` drops below `0`, reset it to `0` (because a negative sum won't contribute positively to subsequent subarrays).

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the issues page if you want to contribute or optimize the code further.
