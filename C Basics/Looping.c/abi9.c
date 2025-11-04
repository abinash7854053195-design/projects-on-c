#include<stdio.h>
int main() {
    // factorial of a number n
    int n, fact = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    for(int i = 1;i<=n;i++) {
        fact *= i;
    }
    printf("Factorial of is: %d\n", fact);
    return 0;

}