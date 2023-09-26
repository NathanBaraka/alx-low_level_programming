#include "lists.h"

/**
 * sum_listint - gives the addition figures of the listint_t list
 * @head: This is the initial node in the list
 *
 * Return: The addition 
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

