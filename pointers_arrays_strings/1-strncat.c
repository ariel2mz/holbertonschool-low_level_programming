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
if (n == 10)
n = 0;

while (*a != '\0')
{
a++;
}
for (i = 0; i < n; i++)
{
*a = *src;
src++;
a++;
}
return (dest);
}
