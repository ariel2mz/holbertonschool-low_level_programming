#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * factorial - Entry point
 *
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (factorial(n - 1) * n);
}
