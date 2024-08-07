#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Sums all its parameters.
 * @n: The number of arguments passed.
 * @separator: aaaaaaa.
 * Return: The sum of all parameters.
 * If n is 0, returns 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

if (separator == NULL)
separator = "";
if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
if (i + 1 != n)
printf("%d%s", va_arg(args, int), separator);
else
printf("%d\n", va_arg(args, int));
}
va_end(args);
}
