#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints the chessboard, which is represented by a
 * 2D array of characters with dimensions 8x8.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
