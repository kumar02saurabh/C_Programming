/*Documentation:
Name : Saurabh Kumar
DOC:01-11-2024
Description: WAP for printing number in inc. format 

Sample I/P:5
Sample O/P:
    1
   12
  123
 1234
12345

*/

#include<stdio.h>
int main(){
    int row,space,col,count,n;

    printf("Enter the number:");
    scanf("%d",&n);

    count=1;
    for (row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        
            printf(" ");
        
        for(col=1;col<=row;col++)
            
            
            printf("%d",col);
            count=count+1;

            printf("\n");

        
    }
    
}