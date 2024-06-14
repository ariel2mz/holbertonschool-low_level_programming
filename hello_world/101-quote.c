#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: Always 0 (Success)
 */
int main(void)
{
write(STDOUT_FILENO, "", strlen("hello world"));
return 1;
}