#include "main.h"
/* more headers goes there */

/**
 * print_numbers - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
void print_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}