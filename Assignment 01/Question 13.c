/*
If we know the lengths of two sides ( b and c ) of a triangle and the angle between them in
degrees (α), we can compute the length of the third side ( a ) using the formula a 2 = b 2 + c 2 −
2bccosα. Write a program to determine the third side of the triangle using the function double
thirdsidecompute(int, int, int);.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592654
double thirdsidecompute(int b, int c, int deg){
    float radin = deg * (PI / 180);
    return sqrt((b * b) + (c * c) - (2 * b * c * cos(radin)));
}
int main(){
    int b, c, deg;
    printf("Enter b -> ");
    scanf("%d", &b);
    printf("Enter c -> ");
    scanf("%d", &c);
    printf("Enter degree -> ");
    scanf("%d", &deg);
    printf("Length of 3rd side = %lf", thirdsidecompute(b, c, deg));
}