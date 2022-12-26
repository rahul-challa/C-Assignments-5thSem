/*
If you have N eggs, then you have N/12 dozen eggs, with N%12 eggs left over. Write a program
that asks the user how many eggs she has and then tells the user how many dozen eggs she has and
how many extra eggs are left over. A gross of eggs is equal to 144 eggs. Extend your program so that
it will tell the user how many gross, how many dozen, and how many left over eggs she has.
*/

#include <stdio.h>
int main(){
int n, d, l, g;
    printf("Enter no egg -> ");
    scanf("%d", &n);
    g = n / 144;
    n = n % 144;
    d = n / 12;
    l = n % 12;
    printf("Your number of eggs is %d gross %d dozen %d", g, d, l);
}