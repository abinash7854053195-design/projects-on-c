#include<stdio.h>
int main() {
    //check a given number is positive or negative
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    num >= 0 ? printf("the number is positive:") : printf("the number is negative:");
    return 0;
}