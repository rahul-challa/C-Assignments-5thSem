/*
Write a program that determines the day number (1 to 366) in a year for a date that is
provided as input data. As an example, January 1, 1994, is day 1. December 31, 1993, is day 365.
December 31, 1996, is day 366, since 1996 is a leap year. A year is a leap year if it is divisible by four,
except that any year divisible by 100 is a leap year only if it is divisible by 400. Your program should
accept the month, day, and year as integers. Include a function leap that returns 1 if called with a
leap year, 0 otherwise.
*/

#include <stdio.h>
int isleap(int year){
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
        return 0;   
    }
int main(void){
    int month = 0, day = 0, year = 0, leapyear = 0, daynumber = 0;
    printf("Enter month -> ");
    scanf("%d", &month);
    printf("Enter day -> ");
    scanf("%d", &day);
    printf("Enter year -> ");
    scanf("%d", &year);
    leapyear = isleap(year);
    switch (month){
        case 1:
            daynumber = day;
            break;
        case 2:
            daynumber = 31 + day + leapyear;
            break;
        case 3:
            daynumber = 59 + day + leapyear;
            break;
        case 4:
            daynumber = 90 + day + leapyear;
            break;
        case 5:
            daynumber = 120 + day + leapyear;
            break;
        case 6:
            daynumber = 151 + day + leapyear;
            break;
        case 7:
            daynumber = 181 + day + leapyear;
            break;
        case 8:
            daynumber = 212 + day + leapyear;   
            break;
        case 9:
            daynumber = 243 + day + leapyear;
            break;
        case 10:
            daynumber = 273 + day + leapyear;
            break;
        case 11:
            daynumber = 304 + day + leapyear;
            break;
        case 12:
            daynumber = 334 + day + leapyear;
            break;
        default:
            break;
    }
    printf("\n your date is %d/%d/%d and the day number is %d\n", month, day, year, daynumber);
    return 0;
}