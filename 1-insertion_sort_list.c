#include "sort.h"
#include <stdio.h>

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: pointer to the head of the list
 * @node1: first node
 * @node2: second node (node1->next)
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
    if (!node1 || !node2)
        return;

    node1->next = node2->next;
    node2->prev = node1->prev;

    if (node2->next)
        node2->next->prev = node1;
    if (node1->prev)
        node1->prev->next = node2;
    else
        *list = node2;

    node2->next = node1;
    node1->prev = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *tmp;

    if (!list || !*list || !(*list)->next)
        return;

    current = (*list)->next;
    while (current)
    {
        tmp = current;
        while (tmp->prev && tmp->n < tmp->prev->n)
        {
            swap_nodes(list, tmp->prev, tmp);
            print_list(*list);
        }
        current = current->next;
    }
}
