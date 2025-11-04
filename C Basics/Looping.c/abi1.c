#include<stdio.h>
int main() {
    int i = 0;
    for(;;) {
        if(i >= 5) {
            break;
        }
        printf("Iteration %d\n", i);
        i++;
    }
    return 0;
}