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
if (n > 48)
{
_putchar('+');
return (1);
}

else if (n < 48)
{
_putchar('-')
return (-1);
}

else
{
_putchar('0')
return (0);
}

return (0);
}
