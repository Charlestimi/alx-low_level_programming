#include "list.h"
/**
 * add_nodeint - adding nodes at the beginning of a listint_t
 * @head:pointer to the first node
 * @n:data to be inputted in num_node
 * Return: pointer to the num node,Null if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num_node = malloc(sizeof(listint_t));

	if (num_node == NULL)
	{
		return (NULL);
	}

	num_node->n = n;
	num_node->next = *head;
	*head = num_node;
	return (num_node);
}
