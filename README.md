#C Python Sorting Algorithms And Big O Project

In this project, I learnt and implemented on different sorting algorithms.

I completed the following tasks and here is an overview of what they entail.


0. Bubble sort

0-bubble_sort.c: C function sorting an array of integers in ascending order using Bubble Sort.
Prints the array after each swap.
0-O: Text file with best, average, and worst case time complexities of Bubble Sort, one per line.
1. Insertion sort

1-insertion_sort_list.c: C function sorting a listint_t doubly-linked list of integers in ascending order using Insertion Sort.
Prints the list after each swap.
1-O: Text file with best, average, and worst case time complexities of Insertion Sort, one per line.
2. Selection sort

2-selection_sort.c: C function sorting an array of integers in ascending order using Selection Sort.
Prints the array after each swap.
2-O: Text file with best, average, and worst case time complexities of Selection Sort, one per line.
3. Quick sort

3-quick_sort.c: C function sorting an array of integers in ascending order using Quick Sort.
Implements Lomuto partition scheme.
Always uses the last element of the partition as the pivot.
Prints the array after each swap.
3-O: Text file with best, average, and worst case time complexities of Quick Sort (Lomuto), one per line.
4. Shell sort - Knuth Sequence

100-shell_sort.c: C function sorting an array of integers in ascending order using Shell sort.
Implements Knuth interval sequence.
Prints the array each time the interval is decreased.
5. Cocktail shaker sort

101-cocktail_sort_list.c: C function sorting a listint_t doubly-linked list of integers using Cocktail Shaker Sort.
Prints the list after each swap.
101-O: Text file with best, average, and worst case time complexities of Cocktail Shaker Sort, one per line.
6. Counting sort

102-counting_sort.c: C function sorting an array of integers in ascending order using Counting Sort.
Assumes array only contains numbers >= 0.
Prints the counting array after initialization.
102-O: Text file with best, average, and worst case time complexities of Counting Sort, one per line.
7. Merge sort

103-merge_sort.c: C function sorting an array of integers in ascending order using Merge Sort.
Implements top-down Merge Sort.
Always sorts left subarray before right.
Prints subarrays each time they are merged.
103-O: Text file with best, average, and worst case time complexities of Merge Sort, one per line.
8. Heap sort

104-heap_sort.c: C function sorting an array of integers in ascending order using Heap Sort.
Implements sift-down Heap Sort.
Prints the array after each swap.
104-O: Text file with best, average, and worst case time complexities of Heap Sort, one per line.
9. Radix sort

105-radix_sort.c: C function sorting an array of integers in ascending order using Radix Sort.
Implements LSD Radix Sort.
Assumes array only contains numbers >= 0.
Prints the array for each significant digit increase.
105-O: Text file with best, average, and worst case time complexities of Radix Sort, one per line.
10. Bitonic sort

106-bitonic_sort.c: C function sorting an array of integers in ascending order using Bitonic Sort.
Assumes size is a power of 2 (i.e., size can be expressed as 2^k where k >= 0).
Prints subarrays each time they are merged.
106-O: Text file with best, average, and worst case time complexities of Bitonic Sort, one per line.
11. Quick Sort - Hoare Partition scheme

107-quick_sort_hoare.c: C function sorting an array of integers in ascending order using Quick Sort.
Implements Hoare partition scheme.
Always uses the last element of the partition as the pivot.
Prints the array after each swap.
107-O: Text file with best, average, and worst case time complexities of Quick Sort (Hoare), one per line.
12. Dealer

1000-sort_deck.c: C function sorting a deck_node_t doubly-linked list deck of cards.
Assumes there are exactly 52 elements in the doubly-linked list.
Orders the deck from spades to diamonds and from aces to kings.
