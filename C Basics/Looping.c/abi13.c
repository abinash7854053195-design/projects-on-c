#include<stdio.h>
int main() {
    //prime number in a range
    int lower, upper, i, j, flag;
    printf("Enter lower: ");
    scanf("%d", &lower);
    printf("Enter upper: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(i <= 1) {
            continue;
        }
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}