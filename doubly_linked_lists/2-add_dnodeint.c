#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to store in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nuevo;
nuevo = malloc(sizeof(dlistint_t));
if (nuevo == NULL)
{
return (NULL);
}
nuevo->n = n;
nuevo->prev = NULL;
nuevo->next = *head;
if (*head != NULL)
{
(*head)->prev = nuevo;
}
*head = nuevo;
return (nuevo);
}
