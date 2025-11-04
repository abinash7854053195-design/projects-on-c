#include<stdio.h>
#include<math.h>
int main(){
    // average of three numbers
    float a,b,c,average;
    printf("enter three numbers:");
    scanf("%f,%f,%f",&a,&b,&c);
    average=(a+b+c)/3.00;
    printf("the average of three numbers is :%.2f",average);
    return 0;
}
