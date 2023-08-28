#include "lists.h"

/**
 * print_listint - all elements of a linked list are printed by the function print_listint.
 * @h: to print a linked list of the listint_t type
 * Return: the quantity of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
