#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals of a matrix
 * @a: pointer to the matric values to be addded
 * @size: size of the matric
 *
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int row = size, col = size;
	int row_count = 0, col_count = 0;
	/* set the previous column and previous row to the top right position */
	int prev_row_count = 0, prev_col_count = size - 1;
	int diagsum1 = 0, diagsum2 = 0;

	while (row_count < row)
	{
		col_count = 0;
		while (col_count < col)
		{
			if (col_count == row_count)
			{
				diagsum1 += *a;
			}

			if ((row_count - prev_row_count == 1) && (prev_col_count - col_count == 1))
			{
				diagsum2 += *a;
				prev_row_count = row_count;
				prev_col_count = col_count;
			}
			/* at the top right corner of the matrix */
			else if (row_count == 0 && col_count == size - 1)
			{
				diagsum2 += *a;
			}
			a++;
			col_count++;
		}
		row_count++;
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
