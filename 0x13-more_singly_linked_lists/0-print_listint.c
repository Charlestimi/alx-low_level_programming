#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t element_count = 0;

	const listint_t *ptr = h;

	for (; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		element_count++;
	}

	return (element_count);
}
