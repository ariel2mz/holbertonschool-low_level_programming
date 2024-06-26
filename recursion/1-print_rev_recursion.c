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
void _print_rev_recursion(char *s)
{
  if (*s != '\0')
    {
      s++;
      _print_rev_recursion(s);
      _putchar(*s);
    }
}
