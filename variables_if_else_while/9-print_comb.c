#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('$');
return (0);
}
