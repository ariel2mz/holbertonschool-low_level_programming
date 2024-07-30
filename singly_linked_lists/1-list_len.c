#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
size_t list_len(const list_t *h)
{
size_t cont = 0;
while (h != NULL)
{
cont++;
h = h->next;
}
return (cont);
}
