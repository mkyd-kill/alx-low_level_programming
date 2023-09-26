#include "lists.h"
/**
 * print_listint - prints elements of a linked list
 * @h: The linked list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	do {
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	} while (h != NULL);
	return (count);
}
