#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *num_node = head;
	listint_t *temp;

	while (num_node != NULL)
	{
		temp = num_node;
		num_node = num_node->next;
		free(temp);
	}
}
