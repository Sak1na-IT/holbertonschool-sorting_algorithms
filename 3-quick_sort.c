#include "sort.h"

/**
 * swap_items - İki elementin yerini dəyişir və massivi çap edir
 * @array: Massiv
 * @size: Massivin ölçüsü
 * @a: Birinci element
 * @b: İkinci element
 */
void swap_items(int *array, size_t size, int *a, int *b)
{
if (*a != *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
print_array(array, size);
}
}

/**
 * lomuto_partition - Lomuto sxemi ilə massivi hissələrə ayırır
 * @array: Massiv
 * @size: Massivin ölçüsü
 * @low: Alt hissənin başlanğıcı
 * @high: Alt hissənin sonu
 * Return: Pivotun indeksi
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
int pivot = array[high];
int i = low;
int j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
swap_items(array, size, &array[i], &array[j]);
i++;
}
}
swap_items(array, size, &array[i], &array[high]);
return (i);
}

/**
 * quick_recursion - Rekursiv sıralama funksiyası
 * @array: Massiv
 * @size: Massivin ölçüsü
 * @low: Başlanğıc indeks
 * @high: Son indeks
 */
void quick_recursion(int *array, size_t size, int low, int high)
{
if (low < high)
{
int pivot_idx = lomuto_partition(array, size, low, high);
quick_recursion(array, size, low, pivot_idx - 1);
quick_recursion(array, size, pivot_idx + 1, high);
}
}

/**
 * quick_sort - Quick Sort alqoritminin əsas funksiyası
 * @array: Massiv
 * @size: Massivin ölçüsü
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_recursion(array, size, 0, size - 1);
}
