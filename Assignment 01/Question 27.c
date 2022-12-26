/*
Implement the following decision table using a multiple-alternative if statement. Assume that
the wind speed is given as an integer.
*/

#include <stdio.h>
int main(){
    int speed;
    printf("Enter the speed of wind -> ");
    scanf("%d", &speed);
    if (speed > 72)
        printf("hurricane");
    else if (speed >= 55)
        printf("whole gale");
    else if (speed >= 39)
        printf("gale");
    else if (speed >= 25)
        printf("strong wind");
    else
        printf("not a strong wind");
}