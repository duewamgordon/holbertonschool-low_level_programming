#include "lists.h"
/**
 * free_dlistint - fonction that free a list
 * @head: List to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
