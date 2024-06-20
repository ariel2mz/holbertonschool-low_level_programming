#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * puts2 - Entry point
 *
 * @str: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (*str != '\0')
{
if ((i % 2) == 0)
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
