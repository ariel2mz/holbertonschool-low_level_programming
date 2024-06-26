#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _puts_recursion - Entry point
 *
 * @s: a
 * Description: 'Escribe un texto'
 * Return: int
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
