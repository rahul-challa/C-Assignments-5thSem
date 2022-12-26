/*
Write C statements to carry out the following steps.

(a) If item is nonzero, then multiply product by item and save the result in product ; otherwise, skip
the multiplication. In either case, print the value of product.

(b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or (y - x ),
whichever is positive. Do not use the abs or fabs function in your solution.

(c) If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 , add x to plus sum.

*/

#include <stdio.h>
int main(){
    //a
    int item,product;
    if(item!=0){
        product = product*item;
        printf("%d",product);
    }
    else
        printf("%d",product);
    //b
    int x,y;
    if(x>y)
        y=x-y;
    else
        y=y-x;
    //c
    int zero_count,plus_sum,minus_sum;
    if(x==0)
        zero_count++;
    else if(x<0)
        x+minus_sum;
    else
        x+plus_sum;
}