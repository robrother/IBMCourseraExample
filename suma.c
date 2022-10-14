/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("Input three float numbers:\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("a=%f, b=%f, c=%f \n\n",a,b,c);
    sum = a+b+c;
    printf("Suma = %f \n\n", sum);;
    return 0;
}
