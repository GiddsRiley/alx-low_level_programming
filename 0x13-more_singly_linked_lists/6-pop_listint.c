#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list and returns the data
 * @head: pointer to pointer to head of list
 *
 * Return: the head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)

		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
