#include "main.h"
/* more headers goes there */

/**
 * print_diagonal - Entry point
 *
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');



}
}
