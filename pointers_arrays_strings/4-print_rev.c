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

aux = s;
while (*s != '\0')
{
s++;
}
while (*s != *aux)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
