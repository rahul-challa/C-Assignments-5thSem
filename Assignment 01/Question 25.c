/*
Assuming x is 15.0 and y is 25.0 , what are the values of the following conditions?
*/

#include <stdio.h>
int main(){
    float x = 15.0, y = 25.0;
    printf(x!=y);
    printf(x<x);
    printf(x>=y-x);
    printf(x==y+x-y);
}