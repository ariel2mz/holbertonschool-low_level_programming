#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: Always 0 (Success)
 */
void print_alphabet(void){
char abecedario;

for (abecedario = 'a'; abecedario <= 'z'; abecedario++)
_putchar(abecedario);
_putchar('\n');
}
