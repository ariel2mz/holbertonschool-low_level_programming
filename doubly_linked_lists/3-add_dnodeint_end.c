#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * @head: aaaaa
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

list_t *nuevo;
list_t *temp;
nuevo = malloc(sizeof(dlistint_t));
if (nuevo == NULL)
{
free(nuevo);
return (NULL);
}
nuevo->n = n;
nuevo->next = NULL;
if (*head == NULL)
{
nuevo->prev = NULL;
*head = nuevo;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
nuevo->prev = temp;
temp->next = nuevo;
}
return (nuevo);
}