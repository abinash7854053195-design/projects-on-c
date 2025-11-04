#include<stdio.h>
int main(){
// check a given number is even or odd
int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
        return 0;
}
 
