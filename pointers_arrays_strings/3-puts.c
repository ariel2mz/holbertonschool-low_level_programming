#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _puts - Entry point
 *
 * @str: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}

