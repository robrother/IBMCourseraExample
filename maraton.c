/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Circle and Area*/

#include <stdio.h>

int main(void)
{
    int miles=26, yards = 385;
    double km;
    km = 1.609 * (miles + yards/1760.0);
    printf("\n Un maraton es %lf kilometros\n",km);
    return 0;
}
