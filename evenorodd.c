/*WAP to check if number is odd or even
Name Saurabh Kumar
DOC 26-10-24
Description: WAP to check if number is odd or even
Sample execution: -
Test Case 1:
Enter the value of 'n' : -2
-2 is negative even number
Test Case 2:
Enter the value of 'n' : 2
2 is positive even number
Test Case 3:
Enter the value of 'n' : 0
0 is neither odd nor even*/

#include<stdio.h>
int main(){
    int n;
    
    printf("Enter the value of 'n':");
    scanf("%d",&n);
    
    
    if(n==0)
    {
        printf("%d is neither odd nor even",n);  // For '0' only.
        
    }
    else
         
        
            if(n>0)
            {
                  //  For Positive even and Positive odd number
                 if (n%2==0)
                 {
                    printf("%d is positive even number",n); // To check positive even number
                 }
                  else
                  {
                  printf("%d is positive odd number",n); //o check positive odd number
                  }
            }
            else 
            
                   // For negative  even and negative odd number
                if (n<0)
                {
                   //  For negative even and negative odd number
                     if (n%2==0)
                      {
                        printf("%d is negative even number",n); // To check negative even number
                      }
                else
                    {
                   printf("%d is negative odd number",n); //o check negative odd number
                   } 
                }
            
          
           
           return 0;
        
    }