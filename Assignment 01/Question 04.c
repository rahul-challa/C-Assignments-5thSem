/*
Write a program to that makes the following exchanges without using temporary variable;

The arrows indicate that b is assume the value of a, c the value of b and so on. Your program
must take input a, b and c from a data file mydata.txt and sends program output to output file
myoutput.txt using input-output redirection.
*/

#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Before swap: a=%d b=%d c=%d", a, b, c);
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("\nAfter swap: a=%d b=%d c=%d", a, b, c);
}