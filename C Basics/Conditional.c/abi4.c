#include<stdio.h>
int main() {
    //even or odd by using ternary operater
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    num % 2 == 0?printf("the number is even:"):printf("the number is odd:");
    return 0;
}