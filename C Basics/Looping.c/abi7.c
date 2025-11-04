#include <stdio.h>

int main() {
    //all numbers from 1 to 10 except 7
    int n;
    printf("Enter numbers from 1 to 10:\n");
    for(n=1;n<=10;n++) {
        if(n==7) {
            continue;
        }
        printf("%d\n", n);
    }

    return 0;
}