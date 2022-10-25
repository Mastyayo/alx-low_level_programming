#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: double pnt to list
 * @n: data for the new node
 * @idx: where to insert
 * Return: inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currentNode, *newNode = malloc(sizeof(listint_t));

	if (head == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx != 0)
	{
		currentNode = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (currentNode == NULL || currentNode->next == NULL)
			{
				return (NULL);
			}
			currentNode = currentNode->next;
		}
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
