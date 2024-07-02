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
char *_strdup(char *str)
{
char *result;
unsigned int i;
 unsigned int x;
if (size == 0)
return (NULL);
i = strlen(str);
result = malloc(i);
if (result == NULL)
return (NULL);
for (x = 0; x < i; x++)
  result[x] = str[x];
 free(str);
return (result);
}
