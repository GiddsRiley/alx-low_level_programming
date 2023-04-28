#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all list_t list elements.
 *
 * @h: pointer to structure list_t.
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int element_counter = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		element_counter++;
		temp = temp->next;
	}
	return (element_counter);
}
