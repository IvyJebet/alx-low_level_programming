#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the bottom or last part of a linked list
 * @head: Pointer to a pointer at the head of the linked list
 * @n: The integer to add as data of the new node
 *
 * Return: Address of new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
