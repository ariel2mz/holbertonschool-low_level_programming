#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * aux - Entry point
 *
 * @n: aaa
 * @g: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int aux(int n, int g)
{
if (g * g == n)
return (g);
else
return aux(n, g + 1);
}
/**
 * _sqrt_recursion - Entry point
 *
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
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
