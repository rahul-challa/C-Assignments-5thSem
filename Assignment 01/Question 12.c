/*
Design a program to compute the roots of a quadratic equation 2x 2 − 4x − 2 = 0 using a
function whose prototype is given as void compute root(double, double,double);.
*/

#include <stdio.h>
#include <math.h>
void compute_root(double a, double b, double c){
    double discriminant, root1, root2, realPart, imagPart;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0){
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else{
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart,imagPart, realPart, imagPart);
    }
}
int main(){
    double a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    compute_root(a, b, c);
}