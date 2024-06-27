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
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
