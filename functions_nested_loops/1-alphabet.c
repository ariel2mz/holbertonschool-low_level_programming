#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: void
 */
void print_alphabet(void)
{
char abecedario;

for (abecedario = 'a'; abecedario <= 'z'; abecedario++)
_putchar(abecedario);
_putchar('\n');
}
