#include "lists.h"

/**
 * pop_listint -It is useful to delete the top linked list
 * @head: This points to the foremost element in this list
 *
 * Return: The deleted data in a elements
 * or NULL incase of an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

