#include <stdlib.h>
#include "lists.h"

/**
 * list_len - get the length of a list
 * @h: list head
 *
 * Return: len of the list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0; /* where to store the list len */

	while (h != (list_t *)NULL) /* traverse the list until null */
	{
		size++; /* increment list len */
		h = h->next; /* move to next list */
	}

	if (size == 0)
	{
		return ((size_t)0); /* if list is null */
	}

	return (size); /* return list len */
}
