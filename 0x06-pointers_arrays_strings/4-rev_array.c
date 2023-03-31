#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i = 0, temp;
while (i < (n - i - 1))
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
i++;
}
}
