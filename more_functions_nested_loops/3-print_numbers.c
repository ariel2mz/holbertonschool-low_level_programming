#include "main.h"
/* more headers goes there */

/**
 * _isdigit - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
int _isdigit(int c)
{
int i;

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}