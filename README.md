# Centered Pyramid Pattern Generator

This project is an algorithmic implementation in C designed to render a **Symmetrical Pyramid (Equilateral Triangle)** on the console. Unlike simple left-aligned patterns, this algorithm calculates precise indentation to center the output.

## 📐 Mathematical Logic

The algorithm constructs the pattern by managing two dependent variables for each row $i$: **Spaces** and **Stars**.

Given a height of $N$ rows:

1.  **Leading Spaces (Indentation):**
    To center the triangle, spaces decrease as we move down.
    $$SpaceCount = N - i$$
    
2.  **Star Count (Width):**
    The number of stars follows an arithmetic progression of odd numbers.
    $$StarCount = 2i - 1$$

### Visual Logic (N=5):
* **Row 1:** 4 Spaces, 1 Star  (`    *`)
* **Row 2:** 3 Spaces, 3 Stars (`   ***`)
* **Row 3:** 2 Spaces, 5 Stars (`  *****`)
* **...**

## ⚙️ Code Structure

* **Outer Loop:** Iterates through rows ($1$ to $N$).
* **Inner Loop 1:** Prints spaces to push the cursor to the correct starting position.
* **Inner Loop 2:** Prints the calculated number of stars.

## 🚀 Usage

1.  Compile the source code:
    ```bash
    gcc main.c -o pyramid
    ```
2.  Run the executable:
    ```bash
    ./pyramid
    ```

---
*This repository demonstrates nested control structures and console cursor management in C.*
