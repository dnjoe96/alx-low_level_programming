#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list
 *
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;
	listint_t *new;
	const listint_t *node = h;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (-1);

	for (i = 0; node != NULL; i++)
	{
		node = node->next;
	}
	free(new);
	return (i);
}
