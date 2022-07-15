#include "main.h"
/**
 * *_strncat - A function that concatenates two strings using at most
 * n bytes from src.
 * @dest: recipient pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: Recipient pointer, dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* should end with an end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}
