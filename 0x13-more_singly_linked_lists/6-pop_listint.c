#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empt
*/

int pop_listint(listint_t **head)

{

	listint_t *tempy;

	int pop_num;


	if (!head || !*head)

		return (0);


	pop_num = (*head)->n;

	tempy = (*head)->next;

	free(*head);

	*head = tempy;

	return (pop_num);

}
