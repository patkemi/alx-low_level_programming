#include "lists.h"

/**
 *print_dlistint - print double linked list
 *@h: address of the head node
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
