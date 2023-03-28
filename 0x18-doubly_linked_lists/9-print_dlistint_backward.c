#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint_backward - print all of the elements
 * of a doubly linked list backward
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *tail = NULL;
	size_t count = 0;

	while (h != NULL && h->next != NULL)
	{
		h = h->next;
	}
	tail = h;

	while (tail != NULL)
	{
		printf("%d\n", tail->n);
		tail = tail->prev;
		count++;
	}
	return (count);
}
