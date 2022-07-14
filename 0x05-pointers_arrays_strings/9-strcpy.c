#include "main"
#include <string.h>

/**
 * _strcpy - copies the string from source to destination.
 * @dest: pointer to the recipient string copied from src
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the string copied (dest)
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
