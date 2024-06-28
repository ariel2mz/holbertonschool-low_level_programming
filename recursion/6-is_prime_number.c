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
  if (g == 0)
    return (1);
  if (n % g == 0)
    return (0);
  else
    aux(n, g - 1);
}
int _sqrt_recursion(int n)
  int a;
a = aux(n, n - 1);
    return a; 
}
