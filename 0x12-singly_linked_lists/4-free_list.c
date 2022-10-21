#include "lists.h"
/**
 * free_list - Function to free a list_t list
 * @head: list to free
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
