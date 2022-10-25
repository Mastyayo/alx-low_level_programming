#include "lists.h"
/**
 * add_nodeint_end - add a new head node at the tail of the listint_t list
 * @head: double pointer to the current head
 * @n: int to put in new node
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
