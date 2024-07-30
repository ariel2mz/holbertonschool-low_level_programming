#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - This istructure will be used for hub to call the correct
 * function for each case
 * @head: The data type as a char
 * @str: a
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int add = 0;
list_t *nuevo;
const  char *aux;
if (str == NULL)
{
return (NULL);
}
nuevo = malloc(sizeof(list_t));
if (nuevo == NULL)
{
free(nuevo);
return (NULL);
}
aux = str;
while (*aux != '\0')
{
add++;
aux++;
}

 while (*head->next != NULL)
   {
     head->next = nuevo;
     nuevo->str = strdup(str);
     nuevo->len = add;
     
   }
 return (add);
}
