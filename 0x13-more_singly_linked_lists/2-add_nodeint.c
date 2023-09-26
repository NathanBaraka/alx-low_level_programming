#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning on a new linker lists
 * @head: The first node to the lists
 * @n: input of new data
 * Return: The pointers to the node but if it fails the return is NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

