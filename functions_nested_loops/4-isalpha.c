#include "main.h"
/* more headers goes there */

/**
 * _isalpha- Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
int _isalpha(int c)
{
int r;

for (r = 65; r <= 90; r++)
{
if (r == c)
{
return (1);
}
}
for (r = 97; r <= 122; r++)
{
if (r == c)
{
return (1);
}
}
return (0);
}


