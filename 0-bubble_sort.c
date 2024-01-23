#include "sort.h"

/**
 * swap_ints - Swap two integers within an array.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_ints(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size) {
    size_t i, length = size;
    bool sorted = false;

    if (array == NULL || size < 2)
        return;

    while (sorted == false) {
        sorted = true;
        for (i = 0; i < length - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                sorted = false;
            }
        }
        length--;
    }
}
