#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strncat - Entry point
 *
 * @dest: aaa
 * @src: aaa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
char *a = dest;
int i;
int x;

while (*a != '\0')
{
x++;
a++;
}
if (x < n)
{
n = x;
}
for (i = 0; i < n; i++)
{
*a = *src;
src++;
a++;
}
return (dest);
}
