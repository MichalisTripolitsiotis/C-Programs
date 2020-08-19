/*
Print a table for sine and cosine between 0 and 1
*/

#include <stdio.h>
#include <math.h>



int main()
{
    //initialize variable
    float x=0.0;
    //run a for between 0 and 1 and print the results
    for (;x<=1.0;x++) {
        printf("sin %f =%f\n", x, sin(x));
        printf("cos %f =%f\n", x, cos(x));

    }

}
