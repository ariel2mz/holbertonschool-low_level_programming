#include "main.h"
/**
 * times_table- Entry point
 * Description: 'Escribe un texto'
 * Return: int
 */
void times_table(void)
{
int i, j, k, r, d;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 0)
_putchar(' ');
k = i * j;
d = k / 10;
r = k % 10;
if (k > 9)
{
_putchar(d + '0');
_putchar(r + '0');
}
else if (k <= 9)
{
_putchar(' ');
_putchar(k + '0');
}
if (j != 9)
_putchar(',');
}
_putchar('\n');
}
}
