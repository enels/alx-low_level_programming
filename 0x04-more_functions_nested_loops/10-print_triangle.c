#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle in height
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int col_count; /* column count */
	int ash_tag;
	int ash_count;

	for (ash_tag = 1; ash_tag <= size; ash_tag++)
	{
		for (col_count = size; col_count > 0; col_count--)
		{
			if (col_count == ash_tag) /* column count is equal ash tag count */
			{
				for (ash_count = 0; ash_count < ash_tag; ash_count++)
				{
					_putchar('#');
					col_count--;
				}
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
