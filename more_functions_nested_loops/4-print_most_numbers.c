#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: void
 */
void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
