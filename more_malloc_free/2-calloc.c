#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * _calloc - Entry point
 *
 * @nmemb: bsada
 * @size: asdasdasds
 * Description: 'Escribe un texto'
 * Return: int
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *result;
unsigned int total_size;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
result = malloc(total_size);
if (result == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
result[i] = 0;
return (result);
}
