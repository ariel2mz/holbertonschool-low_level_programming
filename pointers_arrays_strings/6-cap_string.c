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
int l, i;
const char *p;

if(s[0] >= 65 && s[0] <= 90)
s[0] = s[0] + 32;

p = s;
while (*p != '\0')
p++;
l = p - s;
for (i = 0; i <= l; i++)
{
if (s[i] >= 65 && s[i] <= 90)
{
if (s[i-1] == ' ' || s[i-1] == '    ' || s[i-1] == '\n' || s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' || s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '"' || s[i-1] == '('|| s[i-1] == ')'|| s[i-1] == '{' || s[i-1] == '}')
{
s[i] = s[i] + 32;
} 
}
}
return (s);
}