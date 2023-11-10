#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: the linked list that need add new node to it
 * @n: the data that will add to the new node
 * Return: the new node that add in the end of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	new_node->prev = temp;

	return (new_node);
}
