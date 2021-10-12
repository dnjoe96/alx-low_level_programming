#include "lists.h"

/**
 * free_listint2 - free the listint_t list
 *
 * @head: Pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *hold, *node;

	node = *head;

	for (i = 0; node != NULL; i++)
	{
		hold = node->next;
		free(node);
		node = hold;
	}
	*head = NULL;
}
