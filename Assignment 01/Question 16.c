/*
The ratio between successive speeds of a six-speed gearbox (assuming that the gears are
evenly spaced to allow for whole teeth) is

where M is the maximum speed in revolutions per minute and m is the mini- mum speed. Write a
function speeds ratio that calculates this ratio for any maximum and minimum speeds. Write a main
function that prompts for maximum and minimum speeds (rpm), calls speeds ratio to calculate the

ratio, and displays the results in a sentence of the form The ratio between successive speeds of a six-
speed gearbox with maximum speed ______ rpm and minimum speed ______ rpm is __________.
*/

#include <stdio.h>
#include <math.h>
double speeds_ratio(double max, double min){
    double speed;
    speed = pow((max / min), (1.0 / 5.0));
    return (speed);
}
int main(){
    float max, min;
    printf("Input the max rpm -> ");
    scanf("%f", &max);
    printf("Input the min rpm -> ");
    scanf("%f", &min);
    printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %.2f rpm,and minimum speed %.2f rpm, is. %.2f\n", max, min,
    speeds_ratio(max, min));
}