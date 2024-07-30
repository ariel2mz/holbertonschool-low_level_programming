#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - This istructure will be used for hub to call the correct
 * function for each case
 * @h: The data type as a char
 * Return: On success 1.
 * Description: in this structure you will select the best function
 * for each case.
 */
list_t *add_node(list_t **head, const char *str)
{
  unsigned int add = 0;
  list_t *nuevo;
  const  char *aux;
  if (str == NULL)
    {
      return (NULL);
    }
  nuevo = malloc(sizeof(list_t));

  aux = str;
  while (*aux != '\0')
  {
    add++;
    aux++;
  }
  nuevo->len = add;
  nuevo->str = strdup(str);
  nuevo->next = *head;
  *head = nuevo;

  return (nuevo);
}
