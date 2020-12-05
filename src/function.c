
#include<function.h>
float do_celsius_fahrenheit(float input1)
{
    float result =(input1 * 9/5) + 32;
    return result;
}

float do_kelvin_fahrenheit(float input1)
{
    float result = 9/5*(input1-273)+32;
    return result;
}

float do_fahrenheit_celsius(float input1)
{
    float result = (input1-32) *5/9 ;
    return result;
}

float do_celsius_kelvin(float input1)
{
    float result = input1+273;
    return result;
}

float do_kelvin_celsius(float input1)
{
    float result = input1-273;
    return result;
}


