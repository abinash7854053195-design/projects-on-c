#include<stdio.h>
int main() {
    //check number is prime or not
    int n, i, primenum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++) {
        if(n % i == 0) {
            primenum = 1;
            break;
        }
    }
    if(primenum == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}