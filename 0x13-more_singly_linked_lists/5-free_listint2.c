#include "lists.h"

/**
 * free_listint2 - Like the listint_t it also frees the lists
 * @head: This points to the lists in the listint_t to be freed
 */
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

