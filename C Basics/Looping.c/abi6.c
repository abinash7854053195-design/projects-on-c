#include<stdio.h>
int main() 
{
    // keep taking numbers until user enters enter number multiple of 7
    int n;
    while(1) {
        printf("Enter numbers : ");
        scanf("%d",&n);
        printf("You entered: %d\n", n);
        if(n % 7 == 0)
        {
            break; 
        }
    }
            printf("Thank u");
        

    return 0;
    
}