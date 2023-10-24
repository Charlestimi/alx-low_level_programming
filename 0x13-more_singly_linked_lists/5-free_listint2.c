#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head:pointer to linked_list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *node_num = *head;
	listint_t *number;

	while (node_num != NULL)
	{
	number = node_num;
		node_num = node_num->next;
		free(number);
	}

	*head = (NULL);
}

