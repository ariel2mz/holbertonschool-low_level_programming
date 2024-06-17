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
    int r;
    int d;

    for(i = 0; i <= 9; i++){
        for (j = 0; j <= 9; j++){
            k = i * j;
            if(k > 9){
                d = k/10;
                r = k%10;
            _putchar(' ');
            _putchar(d + '0');
            _putchar(r + '0');
            _putchar(',');
            }
            else if(k <= 9 && i != 0){
            _putchar(' ');
            _putchar(' ');
            _putchar(k +'0');
            _putchar(',');
            }
            else{
                _putchar('0');
                _putchar(',');
            }
        }
        _putchar('\n');
        
            }
}