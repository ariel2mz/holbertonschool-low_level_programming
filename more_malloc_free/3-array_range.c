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
int *array_range(int min, int max)
{
int* result;
int size, i;
if (min > max)
return (NULL);
size = max - min;
result = malloc((size + 1) * sizeof(int));
if (result == NULL)
return (NULL);
for (i = 0; i <= size; i++)
result[i] = 0;
return (result);

}