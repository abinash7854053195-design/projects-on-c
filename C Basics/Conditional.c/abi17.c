#include<stdio.h>
#include<math.h>
int main() {
    // check a numbe is divisible by 2 or not
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("%d",number % 2==0);
    return 0;
}