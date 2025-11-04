#include<stdio.h>
int main() {
    // leap year or not using if-else
    int year;
    printf("enter any year:");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("the year u enter is a leap year:");

    }else{
        printf("the year is not a leap year:");

    }
    return 0;
}