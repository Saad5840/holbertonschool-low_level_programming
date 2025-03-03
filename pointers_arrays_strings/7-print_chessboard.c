#include "main.h"



/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: 2D array representing the chessboard.
 */


void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i <= 7; i++)
{

	for (j = 0; j <= 7; j++)
	{
		_putchar(a[i][j]);
	}
_putchar('\n');
}
}
