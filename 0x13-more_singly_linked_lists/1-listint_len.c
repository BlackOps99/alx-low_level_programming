#include "lists.h"
/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
