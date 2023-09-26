#include "lists.h"

/**
 * get_nodeint_at_index -Here the node is taken to a certain index in the list
 * @head: This is the foremost node in the list
 * @index: The index that is to be returned
 *
 * Return: Points to the node that is needed or 0 
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

