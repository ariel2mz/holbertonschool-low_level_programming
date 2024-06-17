#include "main.h"
/* more headers goes there */

/**
 * _islower - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
 * Return: void
 */
int _islower(int c)
{
char r;

for (r = 'a'; r <= 'z'; r++)
{
if (r == c)
{
return (1);
}
}
return (0);
}
