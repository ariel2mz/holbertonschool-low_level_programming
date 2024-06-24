#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * string_toupper - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
char *string_toupper(char *s)
{
char *a = s;
while(*a != '\0')
{
if(*a >= 65 && *a <= 90)
*a = *a + 32;
}
return (s);
}
