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
for (i = 0; i < n; i++)
{
*a = *src;
a++;
src++;
}
return (dest);
}
