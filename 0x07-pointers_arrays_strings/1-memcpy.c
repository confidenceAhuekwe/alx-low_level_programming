#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 *
 * @src: Source memory area.
 * @dest: recipient memory area (otherwise known as destination).
 * @n: size in byte of the memory space.
 *
 * Return: pointer to the variable dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
