# insertion-sort
Insertion sort is a simple sorting algorithm that sorts an array or a list of elements by repeatedly inserting a new element into a sorted sublist of the array or list until all elements are sorted. 
# Algoritm
The algorithm works as follows:
1. Start with the second element in the array or list, assuming the first element is already sorted.
2. Compare the second element with the first element, and swap them if they are in the wrong order.
3. Repeat step 2 with the third element, comparing it with the second element and swapping if necessary. Then compare the third element with the first element and swap if necessary.
4. Continue this process for all remaining elements in the array or list, comparing each element with the sorted sublist and inserting it in the correct position.
5. When all elements are sorted, the algorithm terminates.
# Explanation Example 
Let's take an example to illustrate how insertion sort works. Consider the following list of integers:

[5, 2, 8, 3, 6]

Initially, we consider the first element as a sorted sublist of one element:

[5]

Next, we iterate through the list starting from the second element (i.e., 2):

[5, 2, 8, 3, 6]

Compare 2 with the only element in the sorted sublist (5). Since 2 is smaller than 5, we shift 5 to the right to make space for 2:

[5, 5, 8, 3, 6]

Compare 2 with the next element in the sorted sublist (5). Since 2 is smaller than 5, we insert 2 in its correct position:

[2, 5, 8, 3, 6]

Next, we consider the first two elements as a sorted sublist:

[2, 5]
and repeat the same steps
final output [2, 3, 5, 6, 8]
# Application
1. Insertion Sort is useful for sorting small arrays or partially sorted arrays. It has a time complexity of O(n^2) and is not suitable for sorting large arrays.
2. Insertion Sort can be used in situations where the input size is small and the array is almost sorted or the input array is guaranteed to have only a few inversions. It is often used as a subroutine in more complex sorting algorithms like Quick Sort, Merge Sort, and Shell Sort.
# Screenshot
![p2](https://user-images.githubusercontent.com/126184012/234286152-d5eefb05-2671-4637-8bf1-57079162782a.png)
