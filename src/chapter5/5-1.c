#include <stdio.h>
#include <math.h>

void main() 
{
    double val = -1.0;
    do{
        printf("sine of %f is %f \n", val, sin(val));
        printf("cosine of %f is %f \n", val, cos(val));
        printf("tangent of %f is %f \n", val, tan(val));
        val++;
    }while(val <= 1.0);
}