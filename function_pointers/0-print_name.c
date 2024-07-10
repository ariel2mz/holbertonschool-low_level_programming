#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/* more headers go here */

/**
 * print_name - Calculate the length of a string
 *
 * @name: The string to measure
 * @f: aaaaa
 * Description: Returns the length of a string
 * Return: Length of the string
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

