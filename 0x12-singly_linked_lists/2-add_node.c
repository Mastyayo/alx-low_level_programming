#include "lists.h"
#include "_strlen.c"
/**
 * add_node - add a new head node at the begining of the list_t list
 * @head: pointer to the current head
 * @str: String to copy into new head
 *
 * Return: address of new element, or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpyString;
	list_t *newnode;
	int length = 0;

	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);

	cpyString = strdup(str);
	if (cpyString == NULL)
	{
		free(newnode);
		return (NULL);
	}

	length = _strlen(cpyString);

	newnode->str = cpyString;
	newnode->len = length;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
