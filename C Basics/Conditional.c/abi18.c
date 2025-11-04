#include<stdio.h>
#include<math.h>
int main() {
    //check number is a two digit number or not
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("%d",number>=10 && number<=99);
    return 0;
}