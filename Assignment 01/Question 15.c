/*
Write a program to take a depth (in kilometers) inside the earth as input data; compute and
display the temperature at this depth in degrees Celsius and degrees Fahrenheit. The relevant
formulas are

Include two functions in your program. Function celsius at depth should compute and return the
Celsius temperature at a depth measured in kilometers. Function fahrenheit should convert a Celsius
temperature to Fahrenheit
*/

#include <stdio.h>
float celsius_at_depth(float depth){
    float celsius = 10 * depth + 20;
    return celsius;
}
float fahrenheit(float celsius){
    float fahrenheit = 1.8 * (celsius) + 32;
    return fahrenheit;
}
int main(){
    float depth;
    printf("Enter depth -> ");
    scanf("%f", &depth);
    float celsius = celsius_at_depth(depth);
    float fahrenheitvar = fahrenheit(celsius);
    printf("The Celsius temperature at depth in km %.2f\n", celsius);
    printf("The fahrenheit temperature at depth in km %.2f", fahrenheitvar);
}