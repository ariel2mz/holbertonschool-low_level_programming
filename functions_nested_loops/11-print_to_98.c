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
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
_putchar('\n');
}
