#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the main string
 * @accept: pointer to the substring
 *
 * Return: the number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strbrk(s, accept));
}
