#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - This istructure will be used for hub to call the correct
 * @head: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best functi
 */
void free_list(list_t *head)
{
list_t *aux;
while (head != NULL)
{
aux = head;
head = head->next;
free(aux->str);
free(aux);
}
}
