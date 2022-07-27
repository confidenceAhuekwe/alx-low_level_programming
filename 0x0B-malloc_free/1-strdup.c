#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a copy of string str
 * @str: pointer to the str nto be copied
 *
 * Return: pointer to the duplicate string, or Null if failed
 */

char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	strCopy = malloc(size * sizeof(*str) + 1);

	if (strCopy == 0)
		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}
