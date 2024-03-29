#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stddef.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool_value - Enumeration of Boolean values.
 * @FALSE: Equals 0.
 * @TRUE: Equals 1.
 */
typedef enum
{
    FALSE = 0,
    TRUE
} bool_value;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
    const int n;                /* Integer value stored in the node */
    struct listint_s *prev;     /* Pointer to the previous node in the list */
    struct listint_s *next;     /* Pointer to the next node in the list */
} listint_t;

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Function declarations */
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */

