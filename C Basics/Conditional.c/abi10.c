#include<stdio.h>
int main() {
    // largest of three numbers using if-else
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("the largest number is a:%d",a);
    }else if(b>a&&b>c){
        printf("the largest number is b:%d",b);
    }else{
        printf("the largest number is c:%d",c);}
        return 0;

}