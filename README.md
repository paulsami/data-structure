# Data-Structure
# Linear Search

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
   gcc LinearSearch.c -o linear_search
   ```
2. Run the executable:
   ```sh
   ./linear_search
   ```
# Binary Search 

## Introduction
Binary Search is an efficient searching algorithm that finds the position of a target element in a **sorted array** by repeatedly dividing the search interval in half.

## Algorithm
1. Set `start = 0` and `end = size - 1`.
2. Calculate `mid = (start + end) / 2`.
3. If `arr[mid]` is the target, return `mid`.
4. If `arr[mid]` is greater than the target, search in the left half (`end = mid - 1`).
5. If `arr[mid]` is less than the target, search in the right half (`start = mid + 1`).
6. Repeat until `start` is greater than `end`.
7. If the element is not found, return `-1`.

## Implementation in C

https://github.com/paulsami/data-structure/blob/main/BinarySearch.c


## Complexity Analysis
| Case | Time Complexity |
|------|---------------|
| **Best Case** (Target is mid element) | **O(1)** |
| **Average Case** | **O(log n)** |
| **Worst Case** | **O(log n)** |

- **Space Complexity**: **O(1)** (Uses constant extra space)

## Advantages
✔ Much faster than **Linear Search** for large datasets  
✔ Time complexity is **O(log n)**, making it efficient  
✔ Works well with **sorted** data  

## Disadvantages
❌ Requires a **sorted array** before searching  
❌ Not suitable for **small** datasets due to sorting overhead  

## Usage
1. Compile the program using a C compiler:
   ```sh
   gcc BinarySearch.c -o binary_search
   ```
2. Run the executable:
   ```sh
   ./binary_search
   ```

## License
This project is open-source and available for educational purposes.

