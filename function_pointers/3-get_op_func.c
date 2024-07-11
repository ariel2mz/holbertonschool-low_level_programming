#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/* more headers go here */

/**
 * int_index - Calculate the length of a string
 *
 * @array: The string to measure
 * @size: aaaaa
 * @cmp: asdsadsa
 * Description: Returns the length of a string
 * Return: Length of the string
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (i < 6)
    {
    if (ops[i].op == s)
    return (ops[i].f);
    i++;
    }
    return (NULL);
}