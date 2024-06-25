#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strncpy - Entry point
 *
 * @s: aaa
 * @c: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *_strchr(char *s, char c)
{
  while (*s != c && *s != '\0' )
  {
  s++;
  }
  s++;
  if (*s == NULL)
    return (NULL);
  s--;
  return (s);
}
