#include<stdio.h>
#include<math.h>
int main() {
    //whether a given number is prime or not
    int n;;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n>=1){
        printf("the number is not prime:");
    }else if (n==2||n==3||n==5||n==7){
        printf("the number is prime:");
    }else if(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0){
        printf("the number is prime:");
    }else{
        printf("the number is not prime:");}
    
    return 0;
    
}