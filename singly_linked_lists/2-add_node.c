#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of the list
 * @str: string to store the list
 * Description: function that adds a new node at the beginning of a list_t list
 * Return: on success the address of the new element or NULL on error
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t elements;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;

	new->len = elements;
	new->next = *head;
	*head = new;

	return (*head);
}
