#include "sort.h"
#include <stdio.h>
/**
 * print_array - Prints an array of integers
 * @array: The array
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
size_t i;
for (i = 0; i < size; i++)
{
if (i)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}
