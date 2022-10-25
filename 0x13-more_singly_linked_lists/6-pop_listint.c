#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: double pntr to head node
 * Return: value of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int nodeValue;

	if (*head == NULL)
		return (0);

	else
	{
		tempNode = *head;
		*head = (*head)->next;
		nodeValue = tempNode->n;
		free(tempNode);
	}
return (nodeValue);
}
