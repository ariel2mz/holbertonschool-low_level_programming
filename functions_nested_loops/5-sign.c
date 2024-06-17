#include "main.h"
/* more headers goes there */

/**
 * print_sign- Entry point
 *
 * Description: 'Escribe un texto'
 * @n: caracter a revisar
 * Return: int
 */
int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}

else if (n == '0')
{
_putchar('0');
return (0);
}

else if (n < '0')
{
_putchar('-');
return (-1);
}

return (0);
}
