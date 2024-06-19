#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 *rev_string - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void rev_string(char *s)
{
char aux;
char *aux2;

aux = *s;
aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}
 _putchar(aux);
while (*aux2 != aux)
{
  _putchar('X');
aux2--;
*s = *aux2;
s++;
}
_putchar('\n');
}

