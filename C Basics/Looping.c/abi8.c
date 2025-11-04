#include<stdio.h>
int main() {
    // all the odd numbers from 1 to 50
    int n;
    printf("Odd numbers from 1 to 50 are:\n");
    for(n=1;n<=50;n++) {
        if(n % 2 == 0) {
            continue;
        }
        printf("%d\n", n);
    }
    return 0;
}