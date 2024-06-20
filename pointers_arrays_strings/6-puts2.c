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

int i;

while (*str != '\0')
{
i++;
if((i % 2) == 1)
_putchar(*str);
str++;
}
_putchar('\n');
}