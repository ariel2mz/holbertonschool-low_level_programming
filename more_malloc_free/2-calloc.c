#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * string_nconcat - Entry point
 *
 * @s1: bsada
 * @s2: asdasdasds
 * @n: awpwap
 * Description: 'Escribe un texto'
 * Return: int
 */
 void *_calloc(unsigned int nmemb, unsigned int size)
 {
int *result;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
result = malloc(nmemb * size + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
result[i] = 0;

return (result);
 }