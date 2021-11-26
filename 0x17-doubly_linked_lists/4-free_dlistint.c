#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head: The head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;

	if (head != NULL)
	{
		nxt = head;

		while (nxt != NULL)
		{
			nxt = nxt->next;
			free(head);
			head = nxt;
		}
	}
}
