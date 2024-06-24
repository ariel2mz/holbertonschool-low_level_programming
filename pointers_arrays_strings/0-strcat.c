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
while (*dest != '\0')
    dest++;
while (*src != '\0')
{
    *dest = *src;
    src++;
    dest++;
}
*dest = *src;
return (dest);
}
