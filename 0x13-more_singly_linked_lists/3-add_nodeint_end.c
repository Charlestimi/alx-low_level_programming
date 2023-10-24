#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *newer;

	listint_t *tempy = *head;

	newer = malloc(sizeof(listint_t));

	if (!newer)
		return (NULL);

	newer->n = n;
	newer->next = NULL;

	if (*head == NULL)

	{
		*head = newer;
		return (newer);
	}

	while (tempy->next)

		tempy = tempy->next;
	tempy->next = newer;
	return (newer);

}
