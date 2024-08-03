#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - This istructure will be used for hub to call the correct
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
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else
printf("[%d] %s\n",  h->len, h->str);
h = h->next;
contador++;
}
return (contador);
}
