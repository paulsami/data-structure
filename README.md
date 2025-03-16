# data-structure
# Linear Search in C

## Introduction
Linear Search is a simple searching algorithm that checks each element of an array sequentially until the target element is found or the list ends.

## Algorithm
1. Start from the first element of the array.
2. Compare each element with the target value.
3. If a match is found, return the index.
4. If no match is found by the end of the list, return `-1` (indicating "not found").

## Implementation in C

https://github.com/paulsami/data-structure/blob/main/LinearSearch.c
## Complexity Analysis
| Case | Time Complexity |
|------|---------------|
| **Best Case** (Target is first element) | **O(1)** |
| **Average Case** (Target is in middle) | **O(n)** |
| **Worst Case** (Target is last or not found) | **O(n)** |

- **Space Complexity**: **O(1)** (Uses constant extra space)

## Advantages
✔ Simple and easy to implement  
✔ Works for both **sorted and unsorted** data  
✔ Suitable for small datasets  

## Disadvantages
❌ Inefficient for large datasets  
❌ **O(n) worst-case complexity**, making it slow compared to **Binary Search** (O(log n))  

## Usage
1. Compile the program using a C compiler:
   ```sh
   gcc linear_search.c -o linear_search
   ```
2. Run the executable:
   ```sh
   ./linear_search
   ```

## License
This project is open-source and available for educational purposes.

