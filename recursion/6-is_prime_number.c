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
int aux2(int n, int g)
{
  if (g == 0)
    return (1);
  if (n % g == 0)
    return (0);
  else
   return  aux2(n, g - 1);
}
int is_prime_number(int n)
  int a;
a = aux2(n, n - 1);
return (a); 
}
