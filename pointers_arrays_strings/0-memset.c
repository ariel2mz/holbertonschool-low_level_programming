#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _memset - Entry point
 *
 * @b: aaa
 * @s: aaa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
char *x = s;
for (; n >= 0; n--)
{
*x = b;
x++;
}
return (s);
}
