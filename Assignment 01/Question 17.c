/*
Write a program in C that prompts the user to enter an integer and determines whether it is
divisible by 5 and 6, whether it is divisible by 5 or 6, and whether it is divisible by 5 or 6, but not
both.
*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer -> ");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 6 == 0)
        printf("Is %d divisible by 5 and 6? true\n", a);
    else
        printf("Is %d divisible by 5 and 6? false\n", a);
    if (a % 5 == 0 || a % 6 == 0)
        printf("Is %d divisible by 5 or 6? true\n", a);
    else
        printf("Is %d divisible by 5 or 6? false\n");
    if ((a % 5 == 0 || a % 6 == 0) && (!((a % 5 == 0) && (a % 6 == 0))))
        printf("Is %d divisible by 5 or 6,but not both? true\n", a);
    else
        printf("Is %d divisible by 5 or 6,but not both? false\n", a);
}