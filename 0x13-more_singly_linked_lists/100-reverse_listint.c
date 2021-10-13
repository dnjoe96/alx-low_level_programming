#include "lists.h"

/**
 * reverse_listint - Reverse a list
 *
 * @head: Pointer to the pointer to the head of the list
 * Return: Pointer to the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new;
	int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	node = *head;

	for (i = 0; node; i++)
	{
		nxt =  node->next;
		if (node == *head)
		{
			node->next = NULL;
			nxt_node = nxt->next;
			nxt->next = node;
		}
		else if (nxt->next == NULL)
		{
			*head = nxt->next;
		}


	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
