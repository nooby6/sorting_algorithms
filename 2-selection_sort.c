#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                   using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description:
 * This function implements the Selection sort algorithm to sort
 * the given array in ascending order. It prints the array after
 * each swap operation.
 */
void selection_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t i, j, min_index;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }

        if (min_index != i)
        {
            /* Swap elements at i and min_index */
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;

            /* Print array after swap */
            print_array(array, size);
        }
    }
}
