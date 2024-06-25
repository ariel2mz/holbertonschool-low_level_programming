#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strncpy - Entry point
 *
 * @dest: aaa
 * @src: aaa
 * @n: aaa
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
}
return (contador);
}
