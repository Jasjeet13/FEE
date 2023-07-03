/* Write a program to show the use of input (Scanf)/output(Printf) statements and block 
structure of C-program by highlighting the feature of "studio.h"  */

# include <stdio.h>
int main(){
    
    // declaring the variables-
    int a;
    char b;
    char c[20];
    
    // Taking integer,character and string input-
    scanf("%d %c %s",&a,&b,&c);
    
    // Printing statements-
    printf("The number entered: %d\n",a);
    printf("The character entered: %c\n",b);
    printf("The string entered: %s\n",c);


}