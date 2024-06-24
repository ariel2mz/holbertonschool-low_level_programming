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
char *cap_string(char *s)
{
int l;
const char *p;

if(a[0] >= 65 && a[0] <= 90)
a[0] = a[0] + 32;

p = s;
while (*p != '\0')
p++;
l = p - s;
for (i = 0; i <= l; i++)
{
if (a[i] >= 65 && a[i] <= 90)
{
if (a[i-1] == ' ' || a[i-1] == '    ' || a[i-1] == '\n' || a[i-1] == ',' || a[i-1] == ';' || a[i-1] == '.' || a[i-1] == '!' || a[i-1] == '?' || a[i-1] == '"' || a[i-1] == '('|| a[i-1] == ')'|| a[i-1] == '{' || a[i-1] == '}')
{
a[i] = a[i] + 32;
} 
}
}
}