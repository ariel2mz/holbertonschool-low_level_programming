#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * reset_to_98 - Entry point
 *
 * @n: aaa
 * Description: 'Escribe un texto'
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
char *a = dest;

while (*a != '\0')
{
a++;   
}
while (*src != '\0')
{
*a = *src;
src++;
a++;
}
*a = *src;
return (dest);
}

