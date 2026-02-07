#include "sort.h"
#include <stdio.h>

/**
* swap_int - swaps two integers in an array
* @a: pointer to first integer
* @b: pointer to second integer
*/
void swap_int(int *a, int *b)
{
int temp;
if (a == b)
return;
temp = *a;
*a = *b;
*b = temp;
}

/**
* lomuto_partition - partitions an array using Lomuto scheme
* @array: pointer to the array
* @low: start index
* @high: end index
* @size: size of the array (for printing)
*
* Return: index of the pivot after partition
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot, i, j;
pivot = array[high];
i = low - 1;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
swap_int(&array[i], &array[j]);
print_array(array, size);
}
}
swap_int(&array[i + 1], &array[high]);
print_array(array, size);
return (i + 1);
}

/**
* quick_sort_recursive - recursive Quick sort
* @array: pointer to the array
* @low: start index
* @high: end index
* @size: size of the array (for printing)
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pi;
if (low < high)
{
pi = lomuto_partition(array, low, high, size);
quick_sort_recursive(array, low, pi - 1, size);
quick_sort_recursive(array, pi + 1, high, size);
}
}

/**
* quick_sort - sorts an array of integers in ascending order
* @array: pointer to the array
* @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}
