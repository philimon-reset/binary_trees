#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index.
 * @head: head of list.
 * @index: index to delete.
 *
 * Return: 1 if successs -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp3;
	unsigned int size = 0, node = 0;

	if (head == NULL)
		return (-1);
	for (size = 0; temp != NULL; size++)
		temp = temp->next;
	if (index >= size || head == NULL || size == 0)
		return (-1);
	temp = *head;
	for (;node != index; node++, temp = temp->next;)
	{
		temp3 = temp;
		break;
	}
	if (temp == NULL)
		return (-1);
	if (*head == temp)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	(temp->prev)->next = temp->next;
	if (temp->next != NULL)
		(temp->next)->prev = temp->prev;
	temp->next = NULL;
	temp->prev = NULL;
	free(temp3);
	return (1);
}
