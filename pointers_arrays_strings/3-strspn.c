#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strncpy - Entry point
 *
 * @dest: aaa
 * @src: aaa
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int contador;

  while (*s != '\0')
    {
      while (*accept != '\0' && *accept != *s)
	{
	  if (*accept == *s)
	  contador++;
	  accept++;
	}
      s++
    }
}
