#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
        int i = 0, j = 0;
        int array[n];

        while (i < n)
        {
                array[i] = a[n - i - 1];
                i++;
        }

        while (j < n)
        {
                a[j] = array[j];
                j++;
        }
}

