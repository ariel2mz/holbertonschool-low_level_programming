#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_diagsums - Entry point
 *
 * @a: aaa
 * @size: aa
 * Description: 'Escribe un texto'
 * Return: int
 */
void _puts_recursion(char *s)
{
  _putchar(*s);
  s++;
  if (*s != '\0')
  _puts_recursion(*s);
  else
    return (0);
}
