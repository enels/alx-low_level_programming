#include "main.h"

/**
 * print_square - print a square
 * @size: size of length and breadth
 *
 * Return: nothing
 */

void print_square(int size)
{
	int col_count;
	int row_count;

	for (col_count = 0; col_count <= size; col_count++)
	{
		for (row_count = 0; row_count <= size; row_count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
