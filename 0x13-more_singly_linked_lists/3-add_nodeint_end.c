#include "lists.h"

/**
 * add_nodeint_end - Add new nodes to the end of an exisiting list
 *
 * @head: Pointer to the pointer to the head of the list
 * @n: Integar to add to the list
 * Return: Pointer to the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;

		for (i = 0; end->next; i++)
		{
			end = end->next;
		}

		end->next = new;
	}

	return (new);
}
