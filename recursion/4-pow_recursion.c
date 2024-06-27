#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _pow_recursion - Entry point
 *
 * @x: aaa
 * @y: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
