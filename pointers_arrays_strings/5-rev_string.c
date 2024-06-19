#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_rev - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
void print_rev(char *s)
{
char *aux;
char *aux2;

aux = s;
aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}
while (*aux2 != *aux)
{
aux2--;
*s = *aux2;
s++
}
_putchar('\n');
}
