#include "main.h"
#include <stdio.h>
/**
 * print_to_98- Entry point
 * Description: 'Escribe un texto'
 * @n:
 * Return: int
 */
void print_to_98(int n)
{
if(n < 98)
{
for (; n <= 98; n++)
{
if ( n != 98 )
printf("%d, ", n);
else
{
_putchar('9');
_putchar('8');
}
}
else if(n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if ( n != 98 )
printf(", ");
}
}
else
{
_putchar('9');
_putchar('8');
}
_putchar('\n');
}
