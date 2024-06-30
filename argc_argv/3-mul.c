#include <stdio.h>
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
int result;

if (argc != 3)
return (1);
result = ((*argv[1] - '0')*(*argv[2] - '0'));
printf("%d", result);
return(result);
}