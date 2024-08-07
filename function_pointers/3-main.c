#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/* more headers go here */

/**
 * main - Calculate the length of a string
 *
 * @argc: The string to measure
 * @argv: aaaaa
 * Description: Returns the length of a string
 * Return: Length of the string
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
return (100);
}
result = operation(a, b);
printf("%d\n", result);
return (0);
}
