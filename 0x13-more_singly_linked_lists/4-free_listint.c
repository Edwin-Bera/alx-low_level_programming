#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - free a list
 * @head: head of the list
 * Returns: void
 */
void free_listint(listint_t *head)
{
	listint_t *front, *del;

	front = head->next;
	while (front != head)
	{
		del = front;
		free(del);
		front = front->next;
	}
	free(front);
}
