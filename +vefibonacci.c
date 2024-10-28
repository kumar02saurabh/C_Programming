/*Documentation
Name: Saurabh Kumar
DOC:27-10-24
Description: WAP to print the Fibonacci numbers or Fibonacci sequence are the numbers
output:
Enter a number: 10
0 1 1 2 3 5 8*/

#include <stdio.h>
int main(){
    int limit,start=0,current=1,next=0;
    //printf("Enter a number:");
    scanf("%d",&limit);
    if(limit>=0){               // loop goes through when input is above 0
        while(next<=limit){  
            printf("%d ",next);
            start=current;
            current=next;
            next=start+current;  // next will be printed which returns addition of start and current
           
           
        }
    }
    else{
        printf("Invalid input\n"); // if user input is less than 0
    }
    return 0;
       
   
 
}

