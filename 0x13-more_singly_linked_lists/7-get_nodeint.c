#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node in a linked list at a specific index
 * @head: initial node of a linked list
 * @index: the node index to return
 *
 * Return: pointer to the desired node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
