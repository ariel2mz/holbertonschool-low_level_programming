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
int i;
char *x = s;
for (i = 0; i <= n; i++)
*x = b;
x++;
return (s);
}
