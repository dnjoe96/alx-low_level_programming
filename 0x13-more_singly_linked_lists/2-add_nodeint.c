#include "lists.h"

/**
 * add_nodeint - Add new nodes to an exisiting list
 *
 * @head: Pointer to the pointer to the head of the list
 * @n: Integar to add to the list
 * Return: Pointer to the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
