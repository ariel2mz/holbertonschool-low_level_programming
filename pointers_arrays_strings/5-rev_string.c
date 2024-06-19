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
char letra;

aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}
 aux = *aux2;
while (*s != aux)
{
letra = *aux2; 
*aux2 = *s; 
*s = letra;

 aux2--;
 s++;
}
_putchar('\n');
}

