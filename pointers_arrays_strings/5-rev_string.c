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
  char pletra,
char *aux2;
char letra;
const char *p;
 int largo;
 int i;
 
if (s == NULL)
return (0);
p = s;
while (*p != '\0')
p++;
largo = p - s;
 
aux2 = s;
while (*aux2 != '\0')
{
aux2++;
}

 aux2--;
 for (i = 0; i <= (largo/2); i++)
{
letra = *aux2;
 *aux2 = *s;
*s = letra;

 aux2--;
 s++;
}
_putchar('\n');
}

