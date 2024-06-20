#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strlen - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _strlen(char *s)
{
const char *p;

if (s == NULL)
return (0);
p = s;
while (*p != '\0')
p++;
return (p - s);
}

/**
 * puts_half - Entry point
 *
 * @str: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int l;

l = _strlen(str);
if ((l % 2) != 1)
l--;
while (*str != '\0')
{
if (i > (l / 2))
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
