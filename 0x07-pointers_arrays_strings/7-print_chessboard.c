#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: pointer to first element in the 2-d array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		putchar('\n');
	}
}
