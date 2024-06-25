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
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *x = dest;
for (; n > 0; n--)
{
*x = *src;
x++;
src++;
}
return (dest);
}
