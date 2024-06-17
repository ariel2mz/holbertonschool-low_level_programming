#include "main.h"
/**
 * times_table- Entry point
 *
 * Description: 'Escribe un texto'
 * @i: caracter a revisar
 * Return: int
 */
void times_table(void){
    int i;
    int j;
    int k;

    for(i = 0; i <= 9; i++){
        for (j = 0; j <= 9; j++){
            k = i * j;
            if(k >= 10){
            _putchar(k/10 + '0');
            _putchar(k%10 + '0');
            }
            else
            _putchar(' ');
            _putchar(k +'0');
        
        }
        _putchar('\n');
        
            }
}