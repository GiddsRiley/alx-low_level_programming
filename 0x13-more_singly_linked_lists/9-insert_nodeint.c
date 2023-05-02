#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the beginning of the list
 * @idx: index where new node should be added
 * @n: value to be stored in new node
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	if (!head)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	current_node = *head;
	for (i = 0; current_node && i < idx - 1; i++)
	current_node = current_node->next;

	if (!current_node)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
