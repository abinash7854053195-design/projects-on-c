#include<stdio.h>
#include<math.h>
int main() {
    // perimeter of rectangle = 2(length + breadth)
    float length, breadth, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);   
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
}