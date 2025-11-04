#include<stdio.h>
int main() {
    // calculate the circumference of a circle
    float radius, circumference;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}