#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - This istructure will be used for hub to call the correct
 * function for each case
 * @head: aaaaa
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *aux;
while (head != NULL)
{
aux = head;
head = head->next;
free(aux);
}
}
