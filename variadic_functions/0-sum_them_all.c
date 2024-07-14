#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of arguments passed.
 *
 * Return: The sum of all parameters.
 * If n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list args;
int sum = 0;
if (n == 0)
return 0;
va_start(args, n);
for (i = 0; i < n; i++)
sum = sum + va_arg(args, int);
va_end(args);
return sum;
}
