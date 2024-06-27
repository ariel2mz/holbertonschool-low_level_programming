#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _print_rev_recursion - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
if (*s != '\0')
_putchar(*s);
s--;
if (*s == '\n')
_putchar(*s);
s++;
}
}
