#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	start = *head;
	n = start->n;
	*head = start->next;
	free(start);

	return (n);
}
