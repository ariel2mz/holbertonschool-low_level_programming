#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t contador = 0;
while (h != NULL)
{
printf("%d\n",  h->n);
h = h->next;
contador++;
}
return (contador);
}
