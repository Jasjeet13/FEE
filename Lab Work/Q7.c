// Write a program to find the greatest among three numbers using-Conditional operator 
// and if-else statement.

# include <stdio.h>
int main(){
    int a,b,c,g=0;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        g=a;
    }
    else if (b>a && b>c){
        g=b;
    }
    else{
        g=c;
    }
    printf("Greatest of the three numbers is: %d",g);

}