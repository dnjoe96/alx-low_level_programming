#include "lists.h"

/**
 * print_listint - Print the contact of a linked list
 *
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	listint_t *new;
	const listint_t *node = h;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (-1);

	for (i = 0; node != NULL; i++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	free(new);
	return (i);
}
