#include "lists.h"
/**
 * free_listint_safe - thsi function free a list in safe mode
 * @h: the head of list
 * Description: frees a string in a safe mode.
 * Return: the freed size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *act;
	size_t i;
	int rest;

	i = 0, act = *h;

	while (act)
	{
		rest = act - act->next;
		if (rest > 0)
		{
			tmp = act->next;
			free(act);
			act = tmp;
			i++;
		} else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
