#include<stdio.h>
int main() {
    //area of square = side * side
    float side, area;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is: %.2f\n", area);
    return 0;
}