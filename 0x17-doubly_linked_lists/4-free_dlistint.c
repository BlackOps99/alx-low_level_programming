#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: the linked list that will be free
 * Return: No Thing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
