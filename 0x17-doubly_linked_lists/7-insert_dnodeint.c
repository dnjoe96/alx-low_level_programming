#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position
 *
 * @h: pointer to the head node
 * @idx: Index to add
 * @n: data to add
 * Return: Pointer of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *new;
	unsigned int node_count = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	head = *h;

	while (head != NULL)
	{
		if (node_count == idx - 1)
		{
			new->n = n;
			new->next = head->next;
			new->prev = head;
			head->next = new;

			return (new);
		}

		head = head->next;
		node_count++;
	}
	return (NULL);
}
