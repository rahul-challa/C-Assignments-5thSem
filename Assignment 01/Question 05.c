/*
Write a program that calculates mileage reimbursement for a salesperson at a rate of $0.35 per
mile. Your program should interact with the user in this manner:
*/
#include <stdio.h>
#define rate 0.35
int main(){
    printf("Mileage Reimbursement Calculator\n");
    float odometerinitial, odometerfinal, differnce, result;
    printf("Enter beginning odometer reading => ");
    scanf("%f", &odometerinitial);
    printf("Enter ending odometer reading => ");
    scanf("%f", &odometerfinal);
    differnce = odometerfinal - odometerinitial;
    result = differnce * rate;
    printf("You traveled %.1f miles. At $%.2f per mile,\nyour reimursement is $ %.2f .\n", differnce, rate, result);
    return 0;
}