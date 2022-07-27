#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char.
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to the array or null if it fails
 *
 * created by: Confidence Ahuekwe
 * cc: 26th July, 2022.
 */

char *create_array(unsigned int size, char c)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = c;

	return (array_alloc);
}
