#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at a given index in
 * a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the desired node
 * Return: pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list;
	unsigned int i = 0;

	list = head;

	while (list != NULL)
	{
		if (i == index)
			return (list);

		list = list->next;

		i++;
	}

	return (NULL);
}
