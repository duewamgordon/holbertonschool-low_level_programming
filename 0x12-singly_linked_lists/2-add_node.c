#include "lists.h"

/**
 * add_node - function that adds a new node 
 * at the beginning of a list_t list
 * @head: head node
 * @str: string
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *n;

	n = malloc(sizeof(list_t));
        while (str[i] != '\0')
		i++;
	if (n == NULL)
		return (NULL);
	if (str == NULL)
		return (0);
	n->str = strdup(str);
	n->len = i;
	n->next = *head;
	*head = n;
	return (n);
}


