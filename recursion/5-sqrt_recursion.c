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
int aux(int n, int g)
{
  if (g * g == n)
    return (g);
  else
    return aux(n, g - 1);
}
int _sqrt_recursion(int n)
{
  if  (n < 0)
    return (-1);
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);
  else
    return aux(n, 0); 
}

