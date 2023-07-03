// Write a program to swap two variable-

# include <stdio.h>
int main(){
    int a,b,c;
    //(a)By using temporary variable-
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("\nEnter the second number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Now first number is: %d\n",a);
    printf("Now second number is: %d",b);


}