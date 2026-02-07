#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes */

/**
 * print_array - prints an array of integers
 * @array: pointer to the array
 * @size: size of the array
 */
void print_array(const int *array, size_t size);

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to the array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order using Quick sort
 * @array: pointer to the array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size);

/**
 * print_list - prints a doubly linked list
 * @list: pointer to the head of the list
 */
void print_list(const listint_t *list);

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list);
void swap(int *a,int *b)

#endif /* SORT_H */
