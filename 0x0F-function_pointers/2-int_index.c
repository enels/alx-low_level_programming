/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: ptr to the func to compare values
 *
 * Return: index of the first element for which the cmp func does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int arr_index; /* array index */

	if (size <= 0)
	{
		return (-1);
	}

	for (arr_index = 0; arr_index < size; arr_index++)
	{
		if (cmp(array[arr_index]) != 0) /* match seen */
		{
			return (arr_index); /* returns element index */
		}
	}

	return (-1); /* no match seen */
}
