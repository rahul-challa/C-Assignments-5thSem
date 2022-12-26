/*
Metro City Planners proposes that a community conserve its water supply by replacing all the
community’s toilets with low-flush models that use only 2 liters per flush. Assume that there is about
1 toilet for every 3 persons, that existing toilets use an average of 15 liters per flush, that a toilet is
flushed on average 14 times per day, and that the cost to install each new toilet is $150. Write a
program that would estimate the magnitude (liters/day) and cost of the water saved based on the
communitys population.
*/

#include <stdio.h>
int main(){
    int people, toilet;
    float flushmoreavg = 14 * 15, flushlessavg = 14 * 2;
    printf("Enter the number of people ");
    scanf("%d", &people);
    toilet = people / 3;
    printf("Cost of installation %d \n", toilet * 150);
    printf("Ammount of water saved %.2f liters/day\n", (flushmoreavg * toilet - flushlessavg * toilet));
    return 0;
}