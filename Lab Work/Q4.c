/* Write a program to perform addition,subtraction,multiplication,division of two numbers 
given as input from the user.*/

# include <stdio.h>
int main(){
    float n1,n2,s,m,p,d;
    printf("Enter first number: ");
    scanf("%f",&n1);
    printf("\nEnter second number: ");
    scanf("%f",&n2);
    s=n1+n2;
    m=n1-n2;
    p=n1*n2;
    d=n1/n2;
    printf("Sum: %f\n",s);
    printf("Difference: %f\n",m);
    printf("Product: %f\n",p);
    printf("Division: %f\n",d);
}