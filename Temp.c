// USing Functions

#include<stdio.h>

float celsius (float f)
  {
    float celsius=(f-32)*5/9;
    return celsius;
  }
int main(){
    int f;
   float x;
    
    // printf("Enter Fahrenheit:");
    scanf("%d",&f);
    
    x=celsius(f);
    
    printf("Celsius:%g",x);
}
