#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strspn - Entry point
 *
 * @s: aaa
 * @accept: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int contador = 0;
char *x;

while (*s != '\0')
{
x = accept;
while (*x != '\0' && *x != *s)
{
x++;
}
if (*x == *s)
contador++;
s++;
if (*s > 90 || *s < 65)
if (*s < 97 || *s > 122)
return (contador);
}
return (contador);
}
