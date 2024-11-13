// Using Functions
#include<stdio.h>

int num (int n )
{
    
    if(n%2==0)
    return 1; // Gives Even 
    else
    return 0;// Gives odd
    
}


int main(){
    int n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    
    x=num(n);
    
    if(x==1)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    
    return 0;
}
