#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked list
 * @h: The linked list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	do {
		count += 1;
		h = h->next;
	} while (h != NULL);
	return (count);
}
