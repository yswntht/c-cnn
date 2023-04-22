/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

#include <time.h>
#include <string.h>


float myexp(int , float );

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double result, result1;

    /* Assign the value we will find the exp of */
    value = 5;

    /* Calculate the exponential of the value */
    
    clock_t begin = clock();
    printf("Timer starts\n");
    result = exp(value);
    printf("Timer ends \n");
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    
    clock_t begin1 = clock();
    printf("Timer starts\n");
    result1 = myexp(40,value);
    
   printf("Timer ends \n");
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    
    
    /* Display the result of the calculation */
    printf("The Exponential of %f is %f and time is %f \n", value, result,time_spent );
    
    printf("The Exponential custom of %f is %f and time is %f \n", value, result1,time_spent1 );

    return 0;
}



float myexp(int n, float x)
{
    float sum = 1.0f; // initialize sum of series
 
    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;
 
    return sum;
}