#include<stdio.h>
#include<math.h>
int main() {
    //cuhe root of a number
    float number, cubeRoot;
    printf("Enter a number: ");
    scanf("%f", &number);
    cubeRoot = pow(number, 1.0/3.0);
    printf("The cube root of %.2f is %.2f\n", number, cubeRoot);
    return 0;
}