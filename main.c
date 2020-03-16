#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 2.8;
    float b = 0.2, bmax = 0;
    float c = 0.;
    int n = 0;

    while (n < 10){

        printf("%d %f %f %f\n", n, a, b, c);

        //float atemp = a; //stores variavble so it can be used unchanged in the second equation
        //float btemp = b;

        c = c + (0.4 * b);
        b = (0.6 * b) + (0.1 * a);
        if (b > (b - (a * 0.1))/0.6){ //allows finding of maximum value of b by "working backwards"
            bmax = b;
            }
        a = 0.9 * a;


        n++;



    }

     printf("%f", bmax);

    }





