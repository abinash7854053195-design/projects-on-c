#include<stdio.h>
int main() {
    //table of a number
    int n;
    printf("Enter the number to print its table: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
/*for reverse table
for (int i=10;i>=1;i--){
        printf("%d x %d = %d\n", n, i, n*i);
}
*/