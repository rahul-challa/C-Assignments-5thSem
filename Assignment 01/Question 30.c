/*
An integer n is divisible by 9 if the sum of its digits is divisible by 9. Develop a program to
display each digit, starting with the rightmost digit. Your program should also determine whether or
not the number is divisible by 9. Test it on the following numbers: n = 154368 n = 621594 n = 123456
Hint: Use the % operator to get each digit; then use / to remove that digit. So 154368 % 10 gives 8
and 154368 / 10 gives 15436. The next digit extracted should be 6, then 3 and so on.
*/

#include <stdio.h>
void isDivisible(int val){
    int sum = 0;
    int n = val;
    while (n > 0){
        printf("%d\n", n % 10);
        sum += n % 10;
        n /= 10;
    }
    if (sum % 9 == 0){
        printf("%d is divisible by 9\n", val);
    }
    else{
        printf("%d is not divisible by 9\n", val);
    }
}
int main(){
    int n;
    printf("Enter an Integer -> ");
    scanf("%d", &n);    
    isDivisible(n);
    return 0;
}