#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a position
 *
 * @head: The head of the list
 * @index: the nth index
 * Return: Returns 1 if successful otherwise-1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *last;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (node->next == NULL && index == 0)
	{
		*head = NULL;
		return (1);
	}

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	for (i = 0; node; i++)
	{
		if (i == index)
		{
			last->next = node->next;

			free(node);

			return (1);
		}

		last = node;
		node = node->next;
	}

	return (-1);
}
