#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * @argc: aaa
 * @argv: aaa
 * Description: 'Escribe un texto'
 * Return: int
 */


int main(int argc, char *argv[])
{
int result, a, b;

if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);
return (0);
}
