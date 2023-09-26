#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: First node
 * @n: New node
 * Return: Address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*creating a new linked list*/
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	/*assigning pointers*/
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
