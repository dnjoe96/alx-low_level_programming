## Exploring searching algorithms

### linear search
In this type of search, the entire element of the array is transversed one by one until the value being search for is found.
The algorithm is suited for both sorted and unsorted array.
#### Time complexity
- Worst-case performance	O(n)
- Best-case performance	O(1)
- Average performance	O(n/2)
- Worst-case space complexity	O(1) iterative
#### Space complexity
- O(1)

### Binary search
In this algorithm, a center number is chosen, and we check if the number is more or less than the value being searched for
if it is less, we face the array to the left of the number, if it is greater, we face the array to the right.
The algorithm is suited for a sorted array.
#### Time complexity
- Worst-case performance	O(log n)
- Best-case performance	O(1)
- Average performance	O(log n)
- Worst-case space complexity
#### Space complexity
- O(1)

### Jump search
In jump search, we make some calculated jumps and check if the value being search for is less than or greater than the point where we are.
if it is greater, we make another jump ahead. if is less, we jump back to where we are coming from and use linear search to search from that point
#### Time complexity
- Worst-case performance	O(√n) 
#### Space complexity
- O(1)
