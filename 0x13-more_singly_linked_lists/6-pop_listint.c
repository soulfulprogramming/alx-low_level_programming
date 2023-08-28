#include "lists.h"

/**
 * pop_listint - removes the linked list's head node.
 * @head: reference to the first item in the linked list
 *
 * Return: the information contained in the removed parts,
 * Alternatively, 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
