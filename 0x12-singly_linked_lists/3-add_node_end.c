#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_lst;
	list_t *old = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	node_lst = malloc(sizeof(list_t));
	if (!node_lst)
		return (NULL);

	node_lst->str = strdup(str);
	node_lst->len = len;
	node_lst->next = NULL;

	if (*head == NULL)
	{
		*head = node_lst;
		return (node_lst);
	}

	while (old->next)
		old = old->next;

	old->next = node_lst;

	return (node_lst);
}
