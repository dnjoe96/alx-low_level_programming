#include "lists.h"

/**
 * sum_listint - Sum all the data in the list
 *
 * @head: The head of the list
 * Return: Return the sum of the data
 */
int sum_listint(listint_t *head)
{
	unsigned int i, count;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = head;
	count = 0;

	for (i = 0; node; i++)
	{
		count += node->n;
		node = node->next;
	}

	return (count);
}
