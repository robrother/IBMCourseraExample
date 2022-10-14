/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Circle and Area*/

#include <stdio.h>

int main(void)
{
    int far, cel;
    
    printf("Ingrese los grados Fahrenheit como enteros: ");
    scanf("%i", &far);
    cel = (far -32)/1.8;
    printf("Los grados Fahrenheit %d ingresados son equivalentes a %d grados centigrados", far,cel);
    return 0;
}
