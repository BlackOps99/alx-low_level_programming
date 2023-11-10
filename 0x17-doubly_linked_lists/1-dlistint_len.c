#include "lists.h"
/**
 * dlistint_len - function that len of list
 * @h: the linked list that need print his elements
 * Return: len of the elemnt in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (len);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
