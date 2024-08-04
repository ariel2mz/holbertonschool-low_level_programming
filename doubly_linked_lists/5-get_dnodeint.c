#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - This istructure will be used for hub to call the correct
 * function for each case
 * @head: aaaaa
 * @index: aaaaaa
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t aux;
aux = head;
while ((aux != NULL) && (aux->n != index))
{
aux = aux->next;
}
return (aux);
}
