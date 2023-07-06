#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @b: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		printf("%d\n", b->n);
		num++;
		b = b->next;
	}

	return (num);
}
