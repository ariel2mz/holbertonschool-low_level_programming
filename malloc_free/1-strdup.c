#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * _strdup - Entry point
 *
 * @str: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int x;
char *result;

if (str == NULL)
return (NULL);
if (*str == '\0')
{
result = malloc(1);
return (result);
}
while (*str != '\0')
{
i++;
str++;
}
for (x = 0; x < i; x++)
str--;
result = malloc((i + 1) * sizeof(char));
if (result == NULL)
return (NULL);
for (x = 0; x < i; x++)
result[x] = str[x];
return (result);
}


