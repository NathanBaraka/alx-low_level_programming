#include "lists.h"

/**
 * free_dlistint -gives freedom to dlistint_t list.
 * @head: points to the list head
 * Return: nothing
 **/
 
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
