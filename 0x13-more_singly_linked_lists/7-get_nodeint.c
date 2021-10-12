#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 *
 * @head: The head of the list
 * @index: the nth index
 * Return: Returns a pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;

	for (i = 0; node; i++)
	{
		if (i == index)
			return (node);
		node = node->next;
	}

	return (NULL);
}
