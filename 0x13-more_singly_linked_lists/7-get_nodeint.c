#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: which node to get
 * @head: pointer to first node
 * Return: the node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		for (; i < index; ++i)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
		return (head);
	}
	else
		return (NULL);
}
