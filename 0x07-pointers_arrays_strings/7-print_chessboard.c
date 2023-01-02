#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an array of pointer to char
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row = 8, col = 8;
	int row_count = 0, col_count = 0;

	while (row_count < row)
	{
		col_count = 0;
		while (col_count < col)
		{
			_putchar(a[row_count][col_count]);
			col_count++;
		}
		row_count++;
		_putchar('\n');
	}
}
