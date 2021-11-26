#include "lists.h"

/**
 * sum_dlistint -  a function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 *
 * @head: The head node of the list
 * Return: the sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum = 0;

	h = head;

	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
