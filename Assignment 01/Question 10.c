/*
Write a program that takes the length and width of a rectangular yard and the length and
width of a rectangular house situated in the yard. Your program should compute the time required
to cut the grass at the rate of two square feet a second.
*/

#include <stdio.h>
int main(){
    float l_y, h_y, l_h, h_h;
    printf("Enter an yard length -> ");
    scanf("%f", &l_y);
    printf("Enter an yard width -> ");
    scanf("%f", &h_y);
    printf("Enter an house length -> ");
    scanf("%f", &l_h);
    printf("Enter an house length -> ");
    scanf("%f", &h_h);
    float diff = (l_y * h_y) - (l_h * h_h);
    printf("The time required to cut the grass of the yard is %.2f", diff / 2);
}