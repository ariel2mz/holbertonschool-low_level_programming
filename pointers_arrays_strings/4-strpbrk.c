#include <stddef.h>
#include "main.h"
/* more headers goes there */

/**
 * _strpbrk - Entry point
 *
 * @s: aaa
 * @accept: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
char *x;

while (*s != '\0')
{
x = accept;
while (*x != '\0' && *x != *s)
{
x++;
}
if (*x == *s)
return (s);
s++;
}
return (NULL);
}
