/*
Write a program that stores the values 'X' and 76.1 in separate memory cells. Your program
should get the values as data items and display them again for the user when done.
*/
#include <stdio.h>
int main(){
    char ch;
    double num;
    ch = 'X';
    num = 76.1;
    printf("The character is =%c\n", ch);
    printf("The value is = %.lf", num);
}