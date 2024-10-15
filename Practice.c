// Temperature Conversion - Fahrenheit to Celcius
#include <stdio.h>
int main(){
    
    float celsius,fahrenheit;
    
    printf ("enter the number ");
    scanf("%f",&fahrenheit);
    
    celsius=(fahrenheit-32)*5/9;
    
    printf("Temp. in celsius is: %f",celsius);
    return 0;
}





// Find average of 3 float values
#include<stdio.h>

int main(){
    
    float a,b,c ,average;
    
    scanf("%f %f %f ",&a, &b, &c);
    
    average = (a+b+c)/3;
    printf("Output : %f",average );
    return 0; 
}



// Find Sum of 2 integers

#include<stdio.h>
int main (){
    int a,b,sum=0;
    
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    
    return 0;
}