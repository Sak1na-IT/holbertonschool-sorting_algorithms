#include "sort.h"

/* Swap two integers */
void swap(int *a, int *b)
{
	if (a != b)
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

/* Lomuto partition scheme */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return i;
}

/* Recursive quick sort */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int p = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, p - 1, size);
		quick_sort_recursive(array, p + 1, high, size);
	}
}

/* Entry function */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
