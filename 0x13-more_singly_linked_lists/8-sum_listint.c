#include "lists.h"

/**
 * sum_listint - computes the total of all data in a listint_t list
 * @head: initial node of a linked list
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
