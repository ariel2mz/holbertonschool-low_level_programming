#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - This istructure will be used for hub to call the correct
 * function for each case
 * @head: aaaaa
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
int sum_dlistint(dlistint_t *head)
{
int x = 0;
dlistint_t a = *head;
while(a != NULL)
{
x = x + a->n;
a = a->next; 
}
}
