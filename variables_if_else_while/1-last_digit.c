#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'Escribe un texto'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
int ult;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


ult = n % 10;
if (ult > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ult);

else if (ult == 0)
printf("Last digit of %d is 0 and is 0\n", n);

else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ult);

return (0);
}
