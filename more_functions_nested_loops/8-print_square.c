#include "main.h"
/* more headers goes there */

/**
 * print_square - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
int print_square(int c)
{
int i;
int j;

if (c <= 0)
for (i = 0; i <= c; i++)
{
for (j = 0; j <= c; j++)
_putchar('#');
_putchar('\n');
}
return (0);
}