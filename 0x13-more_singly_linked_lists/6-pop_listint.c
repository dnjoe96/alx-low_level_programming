#include "lists.h"

/**
 * pop_listint - remove the head of a linked list
 *
 * @head: Pointer to the pointer to the head of the list
 * Return: The data in the head
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	node = *head;

	if (node == NULL)
		return (0);

	data = node->n;
	*head = node->next;
	free(node);

	return (data);
}
