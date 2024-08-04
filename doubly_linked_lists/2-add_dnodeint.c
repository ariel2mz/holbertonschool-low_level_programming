#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
unsigned int add = 0;
dlistint_t *nuevo;
nuevo = malloc(sizeof(dlistint_t));
if (nuevo == NULL)
{
free(nuevo);
return (NULL);
}
nuevo->n = n;
nuevo->next = *head;
head->prev = nuevo;
*head = nuevo;
return (nuevo);
}
