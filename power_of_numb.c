// W.A.P to print the power of two series using for loop

#include<stdio.h>
int main(){
    
    int i,n,c;
    printf("Enter the number:");
    scanf("%d",&n);
     c=1;
    if(n>0)
    {
    for(i=0;i<n;i++)
    {
       
        printf("%d ",c);
        c=2*c;
    }
        
    }
    else
    {
        printf("Error:Number should be an positive number");
    
    }
    
    return 0;
}



