#include "lists.h"
/**
 * print_listint - prints elements of a linked list
 * @h: The linked list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
