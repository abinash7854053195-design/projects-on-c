#include<stdio.h>
int main() {
    // keep taking numbers until user enters odd number
    int num;
    
    do 
    {
        printf("Enter numbers : ");
        scanf("%d", &num);
        if(num % 2 != 0)
        {
            break;
        }
    } while (1);
        
    printf("Thank u");
    
    return 0;
    
}

    
    
    
