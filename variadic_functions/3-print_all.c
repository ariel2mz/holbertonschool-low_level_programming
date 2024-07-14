#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Sums all its parameters.
 * @format: aaaaaaa.
 * Return: The sum of all parameters.
 * If n is 0, returns 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
char aux;
int i = 0;
const char *ptr = format;
char c;
float f;

va_start(args, format);
while (format && format[i]) /* chatgpt dice q esto chequea si es nul*/
{
while (ptr[i])
{
switch (ptr[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
f = (float)va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
aux = ptr[i];
if ((ptr[i + 1]) && (aux == 'c' || aux == 'i' || aux == 'f' || aux ==  's'))
printf(", ");
i++;
}
}
printf("\n");
}
