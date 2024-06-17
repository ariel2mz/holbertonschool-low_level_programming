#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 9; i++)
{
char abecedario;

for (abecedario = 'a'; abecedario <= 'z'; abecedario++)
_putchar(abecedario);
_putchar('\n');
}
}
