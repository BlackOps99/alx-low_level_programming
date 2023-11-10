#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: the linked list that need print his elements
 * @n: the linked list that need print his elements
 * Return: the new node that add of begin of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn_begin;

	nn_begin = malloc(sizeof(dlistint_t));

	if (nn_begin == NULL)
	{
		return (NULL);
	}

	nn_begin->n = n;
	nn_begin->next = *head;
	nn_begin->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = nn_begin;
	}

	*head = nn_begin;

	return (nn_begin);
}
