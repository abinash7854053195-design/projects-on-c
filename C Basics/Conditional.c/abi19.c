#include<stdio.h>
#include<math.h>
int main() {
    // check if givin character is digit or not
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is not a digit.\n");
    }
    return 0;
}