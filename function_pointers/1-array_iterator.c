#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/* more headers go here */

/**
 * array_iterator - Calculate the length of a string
 *
 * @array: The string to measure
 * @size: aaaaa
 * @action: asdsadsa
 * Description: Returns the length of a string
 * Return: Length of the string
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}

