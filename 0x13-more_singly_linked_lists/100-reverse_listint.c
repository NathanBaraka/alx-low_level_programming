#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: As the previous ones it points to the initial node in the list
 *
 * Return: points to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

