#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using insertion sort algorithm.
 * @list: Double pointer to the head of the linked list
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *current = (*list)->next, *temp;

    while (current != NULL)
    {
        temp = current;

        while (temp->prev != NULL && temp->n < temp->prev->n)
        {
            temp->prev->next = temp->next;

            if (temp->next != NULL)
                temp->next->prev = temp->prev;

            temp->next = temp->prev;
            temp->prev = temp->next->prev;
            temp->next->prev = temp;

            if (temp->prev != NULL)
                temp->prev->next = temp;
            else
                *list = temp;

            print_list(*list);
        }

        current = current->next;
    }
}
