#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at position n
 * @head: points to list head
 * @index: idx node whoch to start from 0
 * Return: n node or 0
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
