#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * _strlen_recursion - Entry point
 *
 * @s: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0){
    return (-1);
}
if (y == 0){
    return (x);
}


return (x * _pow_recursion(x, y - 1));
}