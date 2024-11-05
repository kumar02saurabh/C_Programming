/*Documentation
Name: Saurabh kumar
DOC: 06-11-2024
Description: WAP to generate prime number up to limit */


#include<stdio.h>
int main(){
    int num,i,count,limit;
    
    //Ask user to limit 
    printf("Enter a limit:");
    scanf("%d",&limit);
    
    //num start from 2 and goes till limit
    for (num=2; num<=limit; num++)
        {
            count = 1; //assume 1 is prime 
         for(i=2; i*i<=num; i++) //Check dividiblity
        {
            if(num%i==0)
            {
             count = 0;
            
             break;
            }
        
        
        }
    
    
    if(count)
      {
        printf("%d ",num);
      }
       
}
    return 0;
}