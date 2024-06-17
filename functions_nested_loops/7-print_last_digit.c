#include "main.h"
/**
 * print_last_digit- Entry point
 *
 * Description: 'Escribe un texto'
 * @i: caracter a revisar
 * Return: int
 */
int print_last_digit(int i)
{
int u;

u = i % 10;
if (i < 0)
u = -u;
_putchar(u + '0');
}