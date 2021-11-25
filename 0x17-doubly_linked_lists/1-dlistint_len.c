#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: pointer to the head node of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head;
	int count = 0;

	head = h;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
