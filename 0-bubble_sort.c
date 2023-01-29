#include "sort.h"
/**
 * bubble_sort - function
 * @array: array of integers
 * @size: size of table
 * Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
    size_t i;
    bool is_swapped;
    int current;
    size_t n = size;

    do
    {
        is_swapped = false;
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                current = array[i];
                array[i] = array[i + 1];
                array[i+1] = current;
                is_swapped = true;
                print_array(array, n);
            }
        }
        size--;
    }
    while (is_swapped);
}
