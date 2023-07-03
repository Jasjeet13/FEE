/* Write a program to calculate the area and the circumference of a circle by using 
radius as input provided by the user. */

# include <stdio.h>
int main(){
    float radius,area,circumference,pi=3.14;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area=pi*(radius*radius);
    circumference=2*pi*radius;
    printf("The area of the circle is: %f\n",area);
    printf("The circumference of the circle is: %f",circumference);
}