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
const char *p;

if (str == NULL)
p = str;
while (*p != '\0')
p++;
l = p - str;






if ((l % 2) != 1)
l--;
while (*str != '\0')
{
if (i > (l / 2))
_putchar(l + '0');
i++;
str++;
}
_putchar('\n');
}
