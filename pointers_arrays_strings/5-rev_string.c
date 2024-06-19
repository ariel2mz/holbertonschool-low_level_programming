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
char *aux2;
char letra;
int i, j = 0;

aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}
i = _strlen(s);
 while (j <= (i/2))
{
  j++;
letra = *aux2; 
*aux2 = *s; 
*s = letra;

 aux2--;
 s++;
}
_putchar('\n');
}

