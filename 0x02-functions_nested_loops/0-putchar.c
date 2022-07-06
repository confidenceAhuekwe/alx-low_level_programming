#include "main.h"

/**
 * main - program that prints _putchar
 *
 * created by: confidenceAhuekwe
 * cc: 6 July, 2022
 *
 * Return: On success 0
 */

int main(void)
{
	char var[] = "_putchar";
	int m;
	/*length of the array var*/
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (m = 0; m < lenVar - 1; m++)
	{
		_putchar(var[m]);
	}

	_putchar('\n');
	return (0);
}
