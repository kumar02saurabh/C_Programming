/*Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/

#include<stdio.h>
int main(){
    int a,b,perimeter;

    // Ask Value from User
    printf("Enter a length of rectangle:");
    scanf("%d",&a);

    // Ask Value from User
    printf("Enter a breath of rectangle:");
    scanf("%d",&b);
    
    // Formula to find perimeter of Rectangle 
    perimeter = 2*(a+b);
    printf("Perimeter of rectangle is: %d",perimeter);

    return 0;
}
