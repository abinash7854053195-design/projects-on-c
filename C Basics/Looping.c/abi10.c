#include<stdio.h>
int main() {
    //sum of all the numbers between 5 to 50 including 1 and 50
    int sum = 0;
    for(int i=1;i<=50;i++) {
        sum += i;
    }   
   printf("Sum of all numbers between 5 to 50 is: %d\n", sum);
    return 0;
}