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

int sum = 0;
    if (n == 0) {
        return 0;
    }

    va_list args;
    va_start(args, n);
    
    
    for (unsigned int i = 0; i < n; i++) {
        sum = sum + va_arg(args, int);
    }

    va_end(args);
    return sum;
}