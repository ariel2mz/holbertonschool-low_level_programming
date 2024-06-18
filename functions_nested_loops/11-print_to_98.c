#include "main.h"
#include <stdio.h>
/**
 * print_to_98- Entry point
 * Description: 'Escribe un texto'
 * @n:
 * Return: int
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		for (; n <= 98; n++)
		{
			dprintf(1, "%d", n);
			if ( n != 98 )
				dprintf(1,", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			dprintf(1, "%d", n);
			if ( n != 98 )
				dprintf(1,", ");
		}
	}
	_putchar('\n');
}
