#include<stdio.h>
int main() {
    // whether a candidate is eligible for voting or not by ternary operater
    int age;
    printf("enter the age of the candidate:");
    scanf("%d",&age);
    age >= 18 ? printf("the candidate is eligible for voting:"):printf("the candidate is not eligible for voting:");
    return 0;
}