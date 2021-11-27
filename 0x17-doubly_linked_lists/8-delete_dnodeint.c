#include "lists.h"

/**
 * delete_dnodeint_at_index -   deletes the node at index index of
 * a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	while (i < index)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
		++i;
	}
	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
