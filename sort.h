#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Helper functions provided by the project */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Quick Sort Prototypes */
void quick_sort(int *array, size_t size);
void swap_items(int *array, size_t size, int *a, int *b);
int lomuto_partition(int *array, size_t size, int low, int high);
void quick_recursion(int *array, size_t size, int low, int high);

#endif
