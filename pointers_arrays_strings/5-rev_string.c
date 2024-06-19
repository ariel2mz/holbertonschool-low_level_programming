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
  char pletra;
char *aux2;
char letra;
 
 pletra = *s;
aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}
 while (*aux2 != pletra)
{
letra = *aux2;  
*s = letra;

 aux2--;
 s++;
}
_putchar('\n');
}

