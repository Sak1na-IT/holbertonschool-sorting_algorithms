#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void print_list(const int_list_t *list);

/* Quick Sort Prototipləri */
void quick_sort(int *array, size_t size);
void swap_items(int *array, size_t size, int *a, int *b);
int lomuto_partition(int *array, size_t size, int low, int high);
void quick_recursion(int *array, size_t size, int low, int high);

#endif
