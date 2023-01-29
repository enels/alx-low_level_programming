#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the number of nodes in a linked list
 * list_t: list head
 *
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *list_entry = h;

	while (list_entry != (list_t *)NULL)
	{
		size++;
		printf("[%d] %s\n",list_entry->len, list_entry->str);
		list_entry = list_entry->next;
	}

	if (size == 0)
	{
		return (size_t)0;
	}

	return size;
}
