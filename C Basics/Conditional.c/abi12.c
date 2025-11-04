#include<stdio.h>
#include<math.h>
int main() {
    /*the root of a quadratic equation ax^2+bx+c=0 
    ie x=(-b±√(b^2-4ac))/2a*/

    float a,b,c,root1,root2,realPart,imaginaryPart,determinant;
    printf("enter the coefficients a,b and c:");
    scanf("%f,%f,%f",&a,&b,&c);
    determinant=b*b-4*a*c;
    if(determinant>0){
        root1=(-b+sqrt(determinant))/(2*a);
        root2=(-b-sqrt(determinant))/(2*a);
        printf("the roots are real and different:\n");
        printf("root1=%.2f\n",root1);
        printf("root2=%.2f\n",root2);

}else if(determinant==0){
        root1=root2=-b/(2*a);
        printf("the roots are real and same:\n");
        printf("root1=root2=%.2f\n",root1);
    }else{
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-determinant)/(2*a);
        printf("the roots are complex and different:\n");
        printf("root1=%.2f+%.2f\n",realPart,imaginaryPart);
        printf("root2=%.2f-%.2f\n",realPart,imaginaryPart);
    }
    return 0;
}