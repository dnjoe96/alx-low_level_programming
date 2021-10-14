#include "lists.h"

/**
 * insert_nodeint_at_index - Add a node at a position
 *
 * @head: The head of the list
 * @idx: the nth index
 * @n: the data to add
 * Return: Returns a pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *new, *last;

	if (n < 0)
		return (NULL);

	if (*head == NULL && head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	node = *head;

	for (i = 0; node; i++)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = node;
			if (idx != 0)
				last->next = new;
			else
				*head = new;

			return (new);
		}

		last = node;
		node = node->next;
	}

	return (NULL);
}
