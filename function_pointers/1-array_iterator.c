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
void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i;
  for (i = 0; i < size; i++)
    action(array[i]);
}
