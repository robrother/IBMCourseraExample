/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Circle and Area*/

#include <stdio.h>
#define PI 3.141559

int main(void)
{
    double area = 0.0, radious =0.0;
    printf("Ingrese el radio: ");
    scanf("%lf", &radious);
    area = PI * (radious * radious);
    printf("El radio es %lf en metros; el area es %lf en metros cuadrados\n", radious, area);
    return 0;
}
