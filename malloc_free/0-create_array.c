#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * create_array - Entry point
 *
 * @size: aaa
 * @c: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
char *result;
unsigned int i;

if (size == 0)
return (NULL);
result = malloc(size);
if (result == NULL)
return (NULL);
for (i = 0; i < size; i++)
result[i] = c;
return (result);
}
