#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: First parameter of the function of type integer.
 * @b: Second parameter of the function of type integer.
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
