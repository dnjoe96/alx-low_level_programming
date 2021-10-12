#include "lists.h"

/**
 * free_listint - free the listint_t list
 *
 * @head: Pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *hold, *node;

	node = head;

	for (i = 0; node != NULL; i++)
	{
		hold = node->next;
		free(node);
		node = hold;
	}
}
