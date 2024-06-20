#include "main.h"
#include <stdio.h>
/* more headers goes there */

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
if ((l % 2) != 0)
l--
while (*str != '\0')
{
if (i > (l / 2))
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
