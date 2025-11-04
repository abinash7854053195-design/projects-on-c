#include<stdio.h>
int main() {
    //leap year or not using ternary operator
    int year;
    printf("enter any year:");
    scanf("%d",&year);

    year % 4 == 0 && year % 100 !=0 || year % 400 == 0 ? printf("the year is a leap year"):printf("the year is not a leap year");
    return 0;
}