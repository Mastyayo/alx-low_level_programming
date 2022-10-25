#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: double pntr to begining of listint_t
 * @n: interger to add to new node
 *
 * Return: address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
