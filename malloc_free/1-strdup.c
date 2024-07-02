#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * create_array - Entry point
 *
 * @size: aaa
 * @c: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strdup(char *str)
{
unsigned int i;
 unsigned int x;
char *result = (char *)malloc((len + 1) * sizeof(char));
if (i == 0)
return (NULL);
result = malloc(i);
if (result == NULL)
return (NULL);
for (x = 0; x < i; x++)
  result[x] = str[x];
return (result);
}
