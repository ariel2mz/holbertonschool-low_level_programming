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
char r;

for (r = 'a'; r <= 'z'; r++)
{
if (r == c)
{
return (1);
}
for (r = 'A'; r <= 'Z'; r++)
{
if (r == c)
{
return (1);
}
}
}
return (0);
}
