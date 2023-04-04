#include <stdio.h>
#include "lists.h"

/**
 * listint_len - the number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
