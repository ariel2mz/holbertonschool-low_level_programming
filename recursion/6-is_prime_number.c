#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * aux2 - Entry point
 * @n: aaa
 * @g: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int aux2(int n, int g)
{
if (g == 0)
return (0);
if (n % g == 0)
return (1);
else
return  aux2(n, g - 1);
}
/**
 * _is_prime_number - aa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
*/
int is_prime_number(int n)
{
int a;
if (n < 0)
return (0);
a = aux2(n, n - 1);
return (a);
}
