//Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
#include <math.h>

int main() 
{
    for (int i = 100; i < 1000; i++) 
    {
        int ones = i % 10;
        int tens = (i / 10) % 10;
        int hundreds = i / 100;

        
        int sum = pow(ones, 3) + pow(tens, 3) + pow(hundreds, 3);
        if (sum == i) 
        {
            printf("%d is an Armstrong number\n", i);
        }
    }

    return 0;
}
