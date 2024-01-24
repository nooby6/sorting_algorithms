#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion Sort algorithm.
 * @list: A double pointer to the head of the linked list.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *prev, *temp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        temp = current;
        prev = current->prev;

        while (prev != NULL && temp->n < prev->n)
        {
            /* Swap nodes */
            if (temp->next != NULL)
                temp->next->prev = prev;
            if (prev->prev != NULL)
                prev->prev->next = temp;
            temp->prev = prev->prev;
            prev->next = temp->next;
            temp->next = prev;
            prev->prev = temp;

            /* Adjust head if needed */
            if (temp->prev == NULL)
                *list = temp;

            /* Print list after swap */
            print_list(*list);

            /* Move to the next pair of nodes */
            prev = temp->prev;
        }

        /* Move to the next node in the list */
        current = current->next;
    }
}
