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
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *a = dest;
int l;
const char *p;

p = src;
while (*p != '\0')
p++;
l = p - src;


for (i = 0; i < n; i++)
{
if (i > l)
*a = '\0';
else
*a = *src;
a++;
src++;
}
return (dest);
}
