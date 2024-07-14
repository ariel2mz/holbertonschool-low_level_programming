#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of arguments passed.
 *
 * Return: The sum of all parameters.
 * If n is 0, returns 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

if (n == 0)
return;
va_start(args, n);
for (i = 0; i < n; i++)
{
if (i + 1 != n)
printf("%d%s", va_arg(args, int), separator);
else
printf("%d", va_arg(args, int));
}
va_end(args);
}