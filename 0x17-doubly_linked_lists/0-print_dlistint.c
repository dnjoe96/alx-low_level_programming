#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of
 * a dlistint_t
 *
 * @h: pointer to the head node of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	int count = 0;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
