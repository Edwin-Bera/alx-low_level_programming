#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - inserts new node at the begining of the list.
* @head: the head of the list
* @n: data to be stored in the node
* Return: address of new element
*/
listint_t *add_nodeint( listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = *head;
	while ((*head)->next != new_node->next && (*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new_node;
	*head = new_node;
	return (new_node);
}
