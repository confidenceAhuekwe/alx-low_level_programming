#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: number of elements of the array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int b = 0, Rev;

	n = n - 1;
	while (b <= n)
	{
		Rev = a[b];
		a[b++] = a[n];
		a[n--] = Rev;
	}
}
