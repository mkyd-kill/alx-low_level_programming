#include "lists.h"
/**
 * _strlen - return the lenght of a string
 * @str: The string
 * Return: Lenght of the string
 */
int _strlen(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}
/**
 * add_node - adds a new node at the
 * begining of a linked list
 * @head: The first node
 * @str: The string
 * Return: Address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
