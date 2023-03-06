#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a:array holding the symbols for the chess pieces
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
			_putchar(a[column][row]);
		_putchar('\n');
	}
}
