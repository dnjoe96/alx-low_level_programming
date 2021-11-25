#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of
 * a dlistint_t list.
 *
 * @head: Pointer to the pointer of the head node of the list
 * @n: data to add
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *dhead;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
		return (*head);
	}

	dhead = *head;
	while (dhead->next != NULL)
		dhead = dhead->next;

	new->n = n;
	new->prev = dhead;
	new->next = NULL;

	dhead->next = new;

	return (new);
}
