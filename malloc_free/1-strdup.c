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
char *result;
unsigned int i;
 unsigned int x;

 i = strlen(str);
if (i == 0)
return (NULL);
result = malloc(i);
if (result == NULL)
return (NULL);
for (x = 0; x < i; x++)
  result[x] = str[x];
for (x = 0; x < i; x++)
 free(str[x]);
return (result);
}
