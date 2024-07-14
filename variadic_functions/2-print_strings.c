#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Sums all its parameters.
 * @n: The number of arguments passed.
 * @separator: aaaaaaa.
 * Return: The sum of all parameters.
 * If n is 0, returns 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;
    const char *str;

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
         str = va_arg(args, char *);
        if (str == NULL)
            str = "(nil)";

        if (i + 1 != n)
            printf("%s%s", str, separator);
        else
            printf("%s\n", str);
    }
    va_end(args);
}
