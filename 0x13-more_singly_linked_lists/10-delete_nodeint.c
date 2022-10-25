#include "lists.h"
/**
 * delete_nodeint_at_index- deletes a node at index
 * @head: double pnt to list
 * @index: which node to delete
 * Return: 1 if success or -1 upon failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *currentNode, *tempNode = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	currentNode = tempNode;
	for (i = 0; i < index - 1 && tempNode != NULL; i++)
	{
		if (currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
	}
	nextNode = currentNode->next;
	currentNode->next = nextNode->next;
	free(nextNode);
	return (1);
}
