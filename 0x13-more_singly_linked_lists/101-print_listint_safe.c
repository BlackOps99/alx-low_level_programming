#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *current = head;
	const listint_t *check = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		n++;

		current = current->next;

		if (current == check)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		if (current == NULL)
			break;

		check = check->next;
		current = current->next;
	}

	return (n);
}
