#include "lists.h"

/**
 * free_listint -A linked list is freed here
 * @head: listint_t these are the lists that are yet to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

