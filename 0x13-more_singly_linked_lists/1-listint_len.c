#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @b: linked list of type listint_t to be traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		num++;
		b = b->next;
	}

	return (num);
}
