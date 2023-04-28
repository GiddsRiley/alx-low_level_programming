#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		nelem++;
	}

	return (nelem);
}
