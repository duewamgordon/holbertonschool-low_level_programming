#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at
 * the beginning of a doubly linked list
 * @head: pointer to a pointer to a head
 * @n: the int value of the new node
 * Return: the address of a new element or NULL
 */

dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
