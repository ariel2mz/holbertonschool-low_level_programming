#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t contador = 0;
while (h != NULL)
h = h->next;
contador++;
}
return (contador);
}
