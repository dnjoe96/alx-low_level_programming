#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of
 * a dlistint_t list.
 *
 * @head: Pointer to the pointer of the head node of the list
 * @n: data to add
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	(*head)->prev = new;

	*head = new;

	return (new);
}
