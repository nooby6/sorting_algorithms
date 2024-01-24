#include <stddef.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    int temp;
    int swapped;

    if (array == NULL || size < 2)
        return;

    do {
        swapped = 0;
        for (i = 0; i < len - 1; i++) {
            if (array[i] > array[i + 1]) {
                /* Swap elements */
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                /* Print array after swap */
                print_array(array, size);

                swapped = 1;
            }
        }
        len--;
    } while (swapped);
}
