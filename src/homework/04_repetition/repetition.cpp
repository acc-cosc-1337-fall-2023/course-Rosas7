//add include statements
#include "recursion.h"

//add function(s) code here
int factorial(int num)
{
    auto result = 1;

    while(num > 0)
    {
        result *= num;
        num --; 
    }

    return result;

}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            int tempVal = num1;
            num1 = num2;
            num2 = tempVal;
        }

        else
        {
            num1 -= num2;
        }

    }
    return num1;
}
